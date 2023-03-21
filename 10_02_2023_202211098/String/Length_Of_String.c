#include<stdio.h>
int main()
{
	char string[20];
	int count = 0;
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	for (int i = 0 ; string[i] != '\0' ; i++)
		printf("%c", string[i]);
		
	printf("\n");
	for (int i = 0 ; string[i] != '\0' ; i++)
		count++;
	
	printf("Length: %d\n" , count);
	return 0;
}

