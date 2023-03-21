#include <stdio.h>
int sum( int *arr, int n ) 
{
 	if (n < 0) 
 		return 0;
 	else
    		return *(arr+n) + sum(arr, n-1);
 
}

int main()
{
	int arr[100];
	int n;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	int total = sum(arr , n-1);
  	printf("Sum of array elements is: %d\n", total);
  	return 0;
}
