#include<stdio.h>
int main()
{
	int a;
	printf("Enter a No: ");
	scanf("%d" , &a);
	int result = 1;
	for(int i = a ; i>=2 ; i--){
		result = result * a; 
		a--;
		}
	printf("%d" , result);
	return 0;
}

