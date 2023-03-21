#include<stdio.h>
int main(){
	int a;
	printf("Enter Year: ");
	scanf("%d" , &a);
	( ((a%4==0) && (a%100 != 0)) || (a%400 == 0) ) ? printf("\tThe Year is a Leap Year\n") : printf("\tThe Year is Not a Leap Year\n");
	return 0;
}
