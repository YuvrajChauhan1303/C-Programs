#include<stdio.h>
int * Matrix_Multiplication(int * arr1 , int * arr2 , int * arr , int arows , int bcols , int brows);
int main()
{
	int arows , acols;
	printf("Enter Rows: \t");
	scanf("%d" , &arows);
	printf("Enter Columns: \t");
	scanf("%d" , &acols);
	int A[arows][acols];
	
	
	for(int i = 0; i<arows ; i++)
	{
		for(int j = 0; j<acols ; j++)
		{
			printf("Enter Element for Row %d , Column %d:\t" , i+1 , j+1);
			scanf("%d" , &A[i][j]);
		}
	}
	
	
	int brows , bcols;
	printf("Enter Rows: \t");
	scanf("%d" , &brows);
	printf("Enter Columns: \t");
	scanf("%d" , &bcols);
	int B[brows][bcols];
	
	
	for(int i = 0; i<brows ; i++)
	{
		for(int j = 0; j<bcols ; j++)
		{
			printf("Enter Element for Row %d , Column %d:\t" , i+1 , j+1);
			scanf("%d" , &B[i][j]);
		}
	}
	
	int AB[arows][bcols] , BA[brows][acols];
	int *a , *b;
	
	a = Matrix_Multiplication(&A[0][0] , &B[0][0] , &AB[0][0] , arows , bcols , brows);
	
	for(int i = 0 ; i<arows ; i++)
	{
		for(int j = 0; j<bcols ; j++)
		{
			printf("%d\t" , AB[i][j]);
		}
	}	
	
	
	return 0;
}

int * Matrix_Multiplication(int * arr1 , int * arr2 , int * arr , int arows , int bcols , int brows)
{
	
	int i , j , k, sum = 0;
	for(i = 0 ; i < arows ; i++)
	{
		for(j = 0 ; j<bcols ; j++)
		{
			*(arr+i+j) = 0;
			for(k = 0 ; k<brows ; k++)
			{
				sum += *(arr1+i+k) + *(arr2+k+j);
			}
			*(arr+i+j) = sum;
		}
	}
	
	return arr;
}
