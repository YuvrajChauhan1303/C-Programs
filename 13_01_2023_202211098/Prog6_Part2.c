#include<stdio.h>
void max(int , int , int);
int main()
{	
	int a,b,c;
	printf("Enter Number 1: ");
	scanf("%d" , &a);
	printf("Enter Number 2: ");
	scanf("%d" , &b);
	printf("Enter Number 3: ");
	scanf("%d" , &c);
	max(a,b,c);
	return 0;
}

void max(int a, int b, int c)
{
	if (a>b && a>c)
		printf("%d is the Greatest" , a);
	else if(b>a && b>c)
		printf("%d is the Greatest" , b);
	else if(c>a && c>b)	
		printf("%d is the Greatest" , c);
	else if(a == b || b == c || c==a)
	{
		if (a == b && a>c)
			printf("%d and %d are the Greatest" ,a, b);
		else if (b == c && c>a)
			printf("%d and %d are the Greatest" ,b, c);
		else if (c == a && c>b)
			printf("%d and %d are the Greatest" ,a, c);
		else if (a == b && b == c)
			printf("%d , %d and %d are all Equal" ,a, b,c);	
	}		
}
