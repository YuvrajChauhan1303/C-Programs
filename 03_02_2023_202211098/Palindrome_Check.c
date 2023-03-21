#include<stdio.h>
int check(char * , int);
int main()
{
	int n;
	char arr[n];
	//arr == &arr[0]
	printf("Enter Number of Elements:\t");
	scanf("%d" , &n);
	
	for(int i = 0; i<n ; i++)
	{
		printf("Enter Character:\t");
		scanf(" %c" , &arr[i]);
	}
	
	printf("\n");
	printf("%d\n" , check(arr , n));
	return 0;
}

int check(char *arr , int n)
{
	int temp = 0;
	for(int i = 0; i < n/2; i++)
	{
		if(*(arr+i) == *(arr + (n-1) - i))
			temp++;
	}
	if(temp == n/2)
		return 1;
	else
		return 0;
}
