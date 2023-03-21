#include<stdio.h>
int main()
{
	char string[20];
	
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	
	for (int i = 0 ; string[i] != '\0' ; i++)
		printf("%c", string[i]);
	return 0;
}

