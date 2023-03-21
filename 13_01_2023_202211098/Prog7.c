#include<stdio.h>
int fact(int);
int main()
{
	int num , result;
	printf("Enter a Number: ");
	scanf("%d" , &num);
	result = fact(num);
	printf("Factorial of %d is %d\n" , num , result);
	return 0;
}
int fact(int a)
{
	if (a == 1 || a == 0)
		return 1;
	else
		return a * fact(a-1);
}
