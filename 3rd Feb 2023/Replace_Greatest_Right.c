#include<stdio.h>
int max_array(int *arr ,int s , int n );
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
	for(int i = 0; i<n ; i++)
	{
		if(*(arr+i) != max_array(arr , 0 , n))
			*(arr+i) = max_array(arr , i+1 , n );
	}
	
	for(int i = 0 ; i<n ; i++)
		printf("%d\t" , *(arr+i));
	return 0;
}

int max_array(int *arr ,int s , int n )
{
	int max = *(arr+s);
	for(int i = s ; i<n ; i++)
	{
		if(*(arr+i) > max)
			max = *(arr+i);
	}
	return max;
	
}
