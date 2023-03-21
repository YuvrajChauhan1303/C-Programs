#include<stdio.h>
int main()
{
	int i , j;
	printf("Enter Number of Rows of the Arrays: \n");
	scanf("%d" , &i);
	printf("Enter Number of Cols of the Array: \n");
	scanf("%d" , &j);
	int A[i][j];
	printf("Enter Elements in \'A\' Matrix");
	printf("\n");
	int temp;
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("Enter Elements For Row: %d & Col: %d\t" , a+1 , b+1);
			scanf("%d" , &A[a][b]);
		}
		printf("\n");
	}
	
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("%d\t" , A[a][b]);
		}
		printf("\n");
	}
	
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			if(b>a)
			{
				temp = A[a][b];
				A[a][b] = A[b][a];
				A[b][a] = temp;
			}
		}
		printf("\n");
	}
	for(int a = 0 ; a<j ; a++)
	{
		for(int b = 0 ; b<i ; b++)
		{
			printf("%d\t" , A[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}


