#include<stdio.h>
int atPos(int * , int  , int  , int );
int main()
{
	int n , item;
	printf("Enter no. of Elements:\t");
	scanf("%d" , &n);
	int arr[n];
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d\t: " , i+1);
		scanf("%d" , &arr[i]);
	}
	printf("Enter Item to be Searched:\t");
	
	scanf("%d" , &item);
	int result = atPos(arr , 0 , n-1 , item);

	if (result != -1)
		printf("%d Found at %d" , item , result);
	else
		printf("%d" , result);
	return 0;
}
int atPos(int *arr , int start , int end , int item)
{
	int mid;
	if(start<=end)
	{
		mid = start + (start-end)/2;
		if(*(arr+mid) == item)
			return mid;
		else if(*(arr+mid) < item)
			return atPos(arr , mid+1 , end , item);
		else
			return atPos(arr , start , mid-1 , item);
	}	
	else
		return -1;
}
