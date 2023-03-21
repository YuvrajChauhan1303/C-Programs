#include <stdio.h>
int main()
{
	int n, i ,count, prev, index;
	int arr[100];
	count = prev = index = 0;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	for(i = 0; i<n ; i++)
	{
		if(i!= n-1 && arr[i] == arr[i+1])
			count++;
			
		else if(i == n-1 || arr[i]!= arr[i+1])
		{
			if(count>=prev)
			{
				prev = count;
				count = 0;
				index = i;
			}
		}
	}
	printf("The Majority Element is:\t%d\n" , arr[index]);
	return 0;
}
