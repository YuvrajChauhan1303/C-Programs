#include<stdio.h>
void WordCount(char *string);
void IthElement(char *string);
int main()
{
	char string[100];
	printf("Enter a String:\t");
	scanf("%[^\n]s" ,string);
	printf("%s\n" , string);
	WordCount(string);
	return 0;
}
void WordCount(char *string)
{
	int count = 0;
	for(int i = 0 ; *(string + i ) != 0 ; i++)
	{
		if(*(string + i ) == ' ')
			count++;
	}
	printf("%d\n\n" , count + 1);
}
void IthElement(char *string)
{
	printf("Enter i:\t");
	scanf("%d" , &i);
	int count;
	for(int i = 0 ; *(string + i ) != 0 ; i++)
	{
		if(*(string + i ) == ' ')
			count++;
	}
}
