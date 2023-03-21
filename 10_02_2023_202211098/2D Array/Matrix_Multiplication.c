#include<stdio.h>
int main()
{
	int i , j , c , n , r , k , sum =0;
	int A[r][n] , B[n][c] , C[r][c];
	printf("Enter Number of Rows of the Array A: \n");
	scanf("%d" , &r);
	printf("Enter Number of Cols of the Array B: \n");
	scanf("%d" , &n);
	printf("Enter Elements in \'A\' Matrix");
	printf("\n");
	for(int a = 0 ; a<r ; a++)
	{
		for(int b = 0 ; b<n ; b++)
		{
			printf("Enter Elements For Row %d\t" , a+1);
			scanf("%d" , &A[a][b]);
		}
		printf("\n");
	}
	printf("Enter Number of Cols of the Array B: \n");
	scanf("%d" , &c);
	printf("Enter Elements in \'B\' Matrix");
	printf("\n");
	for(int a = 0 ; a<n ; a++)
	{
		for(int b = 0 ; b<c ; b++)
		{
			printf("Enter Elements For Row%d\t" , a+1);
			scanf("%d" , &B[a][b]);
		}
		printf("\n");
	}
	for(int i = 0 ; i<r ; i++)
	{
		for(int j = 0 ; j<c ; j++)
		{
			
			for(k = 0 ; k<n ; k++)
			{
				C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
			}
		}
	}
	for(i = 0; i<r ; i++)
	{
		for(j = 0; j<c;j++)
		{
			printf("%d\t" , C[i][j]);
		}
		pritnf("\n");
	}
	return 0;
}
