#include<stdio.h>
int main()
{
	int n;
	char arr[n];
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Character:\t");
		scanf(" %c" , &arr[i]);
		if(arr[i] >= 65 && arr[i]<=90)
			arr[i] = arr[i] + 32;
		else if(arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	}
	for(int i = 0 ; i<n ; i++)
		printf("%c\t" , arr[i]);
	
	return 0;
}
