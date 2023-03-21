#include<stdio.h>
int power(int,int);
int main()
{
	int num , exp , result;
	printf("Enter the Number: ");
	scanf("%d" , &num);
	printf("Enter the Exponent: ");
	scanf("%d" , &exp);
	result = power(num , exp);
	printf("%d to the power %d is %d\n" , num , exp , result);
	
	return 0;
}
int power(int a,int n)
{
	if(n == 0)
		return 1;
	else
		return a * power(a,n-1);
}
