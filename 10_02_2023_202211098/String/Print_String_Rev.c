#include<stdio.h>
int main()
{
	char string[20];
	int i , index;
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	
	for (i = 0 ; string[i] != '\0' ; i++)
		index = i;
		
	for(int j = index ; j>=0 ; j--)
		printf("%c" , string[j]);
		
	printf("\n");
	return 0;
}

