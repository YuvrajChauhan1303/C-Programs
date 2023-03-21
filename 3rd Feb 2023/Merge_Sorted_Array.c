#include<stdio.h>
int main()
{
	int a[100] , b[100] , c[100];
	int n1,n2;
	
	printf("Enter No. of Elements for Array 1: \t");
	scanf("%d" , &n1);
	for(int i = 0 ; i<n1 ; i++)
	{
		printf("Enter Element for Array 1 %d:\t" , i+1);
		scanf("%d" , &a[i]);
	}
	
	printf("Enter No. of Elements for Array 2: \t");
	scanf("%d" , &n2);
	for(int i = 0 ; i<n2 ; i++)
	{
		printf("Enter Element for Array 1 %d:\t" , i+1);
		scanf("%d" , &b[i]);
	}
	int i = 0, j = 0;
	for (int k = 0; k < n1 + n2; k++)
	{
		if (i < n1 && j < n2)
		{
		   	if (a[i] < b[j])
		    	{
		        	c[k] = a[i];
		        	i++;
		    	}
		   	else
		    	{
		        	c[k] = b[j];
		        	j++;
		    	}
		}
		else if (i < n1)
		{
		    c[k] = a[i];
		    i++;
		}
		else
		{
		    c[k] = b[j];
		    j++;
		}
    	}
    	
	for(int i = 0; i< n1+n2 ; i++)
	{
		printf("%d\t" , c[i]);
	}
	printf("\n");
	
	return 0;
}

