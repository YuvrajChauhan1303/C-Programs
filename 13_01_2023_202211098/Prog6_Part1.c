#include<stdio.h>
float AreaOfCircle(int);
int main()
{
	int radius;
	float result;
	printf("Enter Radius: ");
	scanf("%d" , &radius);
	result	= AreaOfCircle(radius);
	printf("The Area of the Circle of radius %d is %f\n" , radius , result);
	return 0;
}
float AreaOfCircle(int a)
{
	float area;
	area = a * a * 3.14;
	return area;  
}
