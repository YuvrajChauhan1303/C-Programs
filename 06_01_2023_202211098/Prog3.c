#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Side 1: ");
	scanf("%d" , &a);
	printf("Enter Side 2: ");
	scanf("%d" , &b);
	printf("Enter Side 3: ");
	scanf("%d" , &c); 
	if(a+b >=c && b+c >=a && c+a >= b){
		if(a==b && b==c){
			printf("Equilateral Triangle\n");
		}else if((a==b && c!=a) || (b==a && c!=b) || (c==a && b!=c)){
			printf("Isoceles Triangle\n");
		}else if(a!=b && b!=c && c!=a){
			printf("Scalene Triangle\n");
		}
	}else
		printf("Triangle Cannot Exist");
	return 0;
}
