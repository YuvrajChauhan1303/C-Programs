#include<stdio.h>
int main()
{
	int i , j , sum =0;
	int A[i][j] , B[i][j] , C[i][j] , D[i][j];
	printf("Enter Number of Rows of the Arrays: \n");
	scanf("%d" , &i);
	printf("Enter Number of Cols of the Array: \n");
	scanf("%d" , &j);
	printf("Enter Elements in \'A\' Matrix");
	printf("\n");
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("Enter Elements For Row %d\t" , a+1);
			scanf("%d" , &A[a][b]);
		}
		printf("\n");
	}
	printf("Enter Elements in \'B\' Matrix");
	printf("\n");
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("Enter Elements For Row%d\t" , a+1);
			scanf("%d" , &B[a][b]);
		}
		printf("\n");
	}
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			C[a][b] = A[a][b] + B[a][b];
			
		}
	}
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			D[a][b] = A[a][b] - B[a][b];
			
		}
	}
	printf("\n");
	printf("Sum of Matrices: \n");
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("%d\t" , C[a][b]);
			
		}
		printf("\n");
	}
	printf("\n");
	printf("Difference of Matrices: \n");
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("%d\t" , D[a][b]);
			
		}
		printf("\n");
	}
	
	return 0;
}
