#include<stdio.h>
int reverse(int n);
int main()
{
	int n;
	printf("Enter No: \t");
	scanf("%d" , &n);
	printf("Reversed Number is:\t%d\n" , reverse(n));
	return 0;
}
int reverse(int n)
{
	static int rem , rev = 0;
	if(n)
	{
		rem = n%10;
		rev = rev*10 + rem;
		reverse(n/10);
	}
	else
		return 0;
	return rev;
}
