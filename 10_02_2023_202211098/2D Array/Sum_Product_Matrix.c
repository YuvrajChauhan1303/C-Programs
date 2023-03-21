#include<stdio.h>
int main()
{
	int i , j;
	printf("Enter Number of Rows of the Arrays: \n");
	scanf("%d" , &i);
	printf("Enter Number of Cols of the Array: \n");
	scanf("%d" , &j);
	int A[i][j];
	int sum = 0 , product = 1;
	printf("Enter Elements in \'A\' Matrix");
	printf("\n");
	for(int a = 0 ; a<i ; a++)
	{
		for(int b = 0 ; b<j ; b++)
		{
			printf("Enter Elements For Row: %d & Col: %d\t" , a+1 , b+1);
			scanf("%d" , &A[a][b]);
			sum += A[a][b];
			product *= A[a][b];
		}
		printf("\n");
	}
	printf("Sum of Elements: %d\tProduct of Elements: %d\n" , sum , product);
	return 0;
}
