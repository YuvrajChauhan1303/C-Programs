#include<stdio.h>
void rotate_array(int *arr , int n);
int main()
{
	int arr[100];
	int n , rot;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	printf("Enter Value to be Rotated:\t");
	scanf("%d" , &rot);
	
	for(int i = 0 ; i<rot ; i++)
		rotate_array(arr , n);
		
	for(int i = 0; i<n ; i++)
		printf("%d\t" , arr[i]);
		
	printf("\n");
	return 0;
}
void rotate_array(int *arr , int n)
{
	int temp = *(arr+n-1);
	for(int i = (n-2) ; i >=0 ; i--)
	{
		*(arr+1+i) = *(arr+i);
	}
	*arr = temp;
}
