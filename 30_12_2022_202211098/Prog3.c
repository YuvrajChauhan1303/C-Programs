#include<stdio.h>
int main(){
	char a , b;
	printf("Enter Char: ");
	scanf("%c %c" , &a,&b);
	printf("ASCII for Chars are: %d %d\n" , a,b);
	int temp;
	temp = a|b;
	printf("\t%d\n",temp);
	return 0;
}
