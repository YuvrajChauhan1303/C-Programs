#include<stdio.h>
int Check_Zero(int * arr , int a, int b);
int main()
{
	int a , b;
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
	printf("%d\n" , Check_Zero(&matrix[0][0] , a , b));
	return 0;
}
int Check_Zero(int * arr , int a , int b)
{
	int flag = 0;
	for(int i = 0 ; i<a ; i++)
	{
		for(int j = 0 ; j<b ; j++)
		{	
			if( *(arr+(i*a)+j) == 0 )
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if(flag == 1)
			break;	
	}
	return flag;
}
