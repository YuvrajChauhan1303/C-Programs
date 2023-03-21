#include<stdio.h>
int main(){
	int a , b;
	printf("Enter No: ");
	scanf("%d" , &a);
	printf("Enter No: ");
	scanf("%d" , &b);
	int temp;
	temp = a&b;
	printf("\t%d\n",temp);
	return 0;
}
