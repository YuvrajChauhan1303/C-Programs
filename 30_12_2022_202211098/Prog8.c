#include<stdio.h>
int main(){
	float a;
	printf("Enter Temperature: ");
	scanf("%f" , &a);
	float temp;
	temp = ((a*9)/5) + 32;
	printf("\tThe Temperature in Farenheit is %f \n" , temp);
	return 0;
	
}
