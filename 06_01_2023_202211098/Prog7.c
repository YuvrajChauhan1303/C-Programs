#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d" , &num);
	for(int i = 1; i<=10 ;i++)
		printf("%d Multiplied by %d is %d\n" , num , i , num*i);
	return 0;
}
