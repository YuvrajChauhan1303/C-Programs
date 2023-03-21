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
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = i+1; j<n ; j++)
		{
			if(arr[i] == arr[j])
			{
				for (int k = j-1 ; k<n ; k++)
				{
					arr[j] = arr[j+1];
					n--;
				} 
			}
		}
		
	}
	
	for(int i = 0; i< n ; i++)
	{
		printf("%d\t" , arr[i]);
	}
	printf("\n");
	
	return 0;
}

