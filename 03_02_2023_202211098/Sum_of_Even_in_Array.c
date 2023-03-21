#include<stdio.h>
int main()
{
	int n , sum =0;
	int arr[n];
	printf("Enter Number of Elements of an Array: \n");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d\t" , i+1);
		scanf("%d" , &arr[i]);
		if (arr[i] % 2 == 0)
			sum += arr[i];
	}
	printf("%d is the Sum of Even Numbers of the array" , sum);
	return 0;
}
