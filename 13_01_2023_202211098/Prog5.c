#include <stdio.h>
int main()
{	
	int i,j,a;
	printf("Enter No. of Rows: ");
	scanf("%d" ,&a);
	
	for(i=1;i<=a;i++)
	{
	  for(j=1;j<=(a-i);j++)
	  	printf(" ");
	  for(j=1;j<=i;j++)
	  	printf("* ");
          printf("\n");
	}
	return 0;
}
