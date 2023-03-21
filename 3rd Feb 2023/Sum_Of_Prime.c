#include<stdio.h>
int isPrime(int a);
int main()
{
	int flag = 0;
	int n;
	printf("Enter No: \t");
	scanf("%d" , &n);
	
	for(int i = 0 ; i<n/2 ; i++)
	{
		if(isPrime(i) && isPrime(n-i))
		{
			printf("Yes!\n");
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
		printf("No!\n");
		
	return 0;
}
int isPrime(int a)
{	
	int i = 0;
	for(i = 2 ; i<a ; i++)
	{
		if (a%i == 0)
			return 0;
	}
	if (i == a || i == 2)
		return 1;
}
