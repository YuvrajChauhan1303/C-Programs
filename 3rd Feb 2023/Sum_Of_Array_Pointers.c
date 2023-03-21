#include<stdio.h>
int main()
{
   	
   	int i, sum=0;
   	int arr[100];
	int n;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	for(i=0;i<n;i++) 
		sum = sum + *(arr+i);
	printf("\nThe sum is: %d",sum);
}
