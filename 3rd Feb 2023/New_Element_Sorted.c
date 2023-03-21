#include<stdio.h>
int main()
{
	int arr[100];
	int n , item;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	printf("Enter Element to be added:\t");
	scanf("%d" , &item);
	
	for(int i = 0 ; i<n ; i++)
	{
		if(item < arr[i])
		{
			for(int j = n ; j>=i ; j--)
			{
				arr[j] = arr[j-1];
			}
			n++;
			arr[i] = item;	
			break;	
		}
			
	}
	
	
	for(int i = 0; i < n ; i++)
	{
		printf("%d\t" , arr[i]);
	}
	printf("\n");
	
	return 0;
}

