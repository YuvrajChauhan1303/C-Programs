#include<stdio.h>
int main()
{
	int a , b;
	int *x , *y;
	printf("Enter No. 1: \t");
	scanf("%d" , &a);
	printf("Enter No. 2: \t");
	scanf("%d" , &b);
	x = &a;
	y = &b;
	printf("SUM:%d\tDIFFERENCE:%d\tPRODUCT:%d\tDIVISION:%.2f\t" , *x + *y , *x - *y , *x * *y , (float)*x / *y);
	return 0;
}	
