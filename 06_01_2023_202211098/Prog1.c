#include<stdio.h>
int main()
{	
	int a,b,c;
	printf("Enter Number 1: ");
	scanf("%d" , &a);
	printf("Enter Number 2: ");
	scanf("%d" , &b);
	printf("Enter Number 3: ");
	scanf("%d" , &c);
	if(a<b){
		if(b>c){
			printf("%d is Greatest" , b);
		} else if(c>b){
			printf("%d is Greatest" , c);
		} else if(b == c){
			printf("%d and %d are equal and Greatest" , b , c);
		}
	}else if(b<a){
		if(a>c){
			printf("%d is Greatest" , a);
		} else if(c>a){
			printf("%d is Greatest" , c);
		} else if(a == c){
			printf("%d and %d are equal and Greatest" , a , c);
		}
	}if(a==b){
		if(b>c){
			printf("%d and %d are equal and Greatest" , a , b);
		} else if(c>b){
			printf("%d is Greatest" , c);
		} else if(b == c){
			printf("%d , %d and %d are equal and Greatest" ,a , b , c);
		}
	}
	return 0;
}
