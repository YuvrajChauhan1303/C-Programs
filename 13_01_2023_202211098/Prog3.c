#include<stdio.h>
int main()
{	
	int num, sum = 0, temp = 0;
	printf("Enter a Number: ");
	scanf("%d" , &num);
	while(num>0)
	{
		temp = num % 10;
		num = num/10;
		sum = sum + temp;
	}	
	printf("The Sum of the Digits of given Number is %d\n"  , sum);
	return 0;
}
