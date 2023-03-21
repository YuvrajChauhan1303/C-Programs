#include<stdio.h>
int main()
{
   	
   	int arr[100];
	int n;
	printf("Enter No. of Elements: \t");
	scanf("%d" , &n);
	for(int i = 0 ; i<n ; i++)
	{
		printf("Enter Element %d:\t" , i+1);
		scanf("%d" , &arr[i]);
	}
	int pos;
	printf("Enter Position:\t");
	scanf("%d" , &pos);
	for(int i = pos ; i<n ; i++)
		printf("%d\t" , *(arr+i));
	
}
