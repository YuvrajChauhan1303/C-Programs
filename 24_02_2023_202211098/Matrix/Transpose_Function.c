#include<stdio.h>
int * Transpose(int * arr ,int a , int b );
int main()
{
	int a , b;
	int *ptr;
	printf("Enter Rows: \t");
	scanf("%d" , &a);
	printf("Enter Columns: \t");
	scanf("%d" , &b);
	int matrix[a][b];
	for(int i = 0; i<a ; i++)
	{
		for(int j = 0; j<b ; j++)
		{
			printf("Enter Element for Row %d , Column %d:\t" , i+1 , j+1);
			scanf("%d" , &matrix[i][j]);
		}
	}
	
	for(int i = 0; i<a ; i++)
	{
		for(int j = 0; j<b ; j++)
		{
			printf("%d\t" , matrix[i][j]);
		}
		printf("\n");
	}
	
	ptr = Transpose(&matrix[0][0] ,  a , b);
	
	for(int i = 0; i<a ; i++)
	{
		for(int j = 0; j<b ; j++)
		{
			printf("%d\t" , *(ptr + (i*a) + j));
		}
		printf("\n");
	}
	return 0;
}

int * Transpose(int * arr , int a , int b)
{
	int temp;
	for(int i = 0 ; i<a ; i++)
	{
		for(int j = 0 ; j<b ; j++)
		{
			if(j>i)
			{
				temp = *(arr + (i*a) + j);
				*(arr + (i*a) + j) = *(arr + (j*a) + i);
				*(arr + (j*a) + i) = temp;
			}
		}
		printf("\n");
	}
	
	return arr;
}
