#include<stdio.h>
int main()
{
	char ch;
	float a,b;
	printf("Enter Operand 1: ");
	scanf("%f" , &a);
	printf("Enter Operand 2: ");
	scanf("%f" , &b);
	printf("Enter Operator: ");
	scanf(" %c" , &ch);
	switch(ch){
	case '+' : { printf("%f" , a+b); break;}
	case '-' : { printf("%f" , a-b); break;}
	case '*' : { printf("%f" , a*b); break;}
	case '/' : { printf("%f" , a/b); break;}
	default : {printf("Error"); break;}
	}
	return 0;
}
