#include<stdio.h>
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
	int count = 0;
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = i+1; j<n ; j++)
		{
			if (arr[i] == arr[j])
				{
					count++;
					break;
				}
		}
	}
	printf("Total Duplicates are:\t%d\n" , count);
	return 0;
}
