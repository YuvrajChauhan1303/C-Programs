#include<stdio.h>
int length(char *str);
int main()
{
	char string1[20] , string2[20];
	int flag = 0;
	
	printf("Enter a String:\t");
	scanf(" %[^\n]s" , string1);
	for (int i = 0 ; string1[i] != '\0' ; i++)
		printf(" %c", string1[i]);
		
	printf("\n");
	printf("Enter a String:\t");
	scanf(" %[^\n]s" , string2);
	
	for (int i = 0 ; string2[i] != '\0' ; i++)
		printf(" %c", string2[i]);
	printf("\n");
	
	if(length(string1) == length(string2))
	{
		int l = length(string1);
		for(int i = 0 ; i < l ; i++)
		{
			if(string1[i] == string2[i])
				flag = 1;
			else
			{
				flag = 0;
				printf("Mismatch Found String1[i] = %c & String2[i] = %c\n" , string1[i] , string2[i]);
				break;
			}
		}
	}
	
	if (flag == 1)
		printf("Both Strings are Same!\n");
	
	return 0;
}

int length(char *str)
{
	
	int count = 0;
	for (int i = 0 ; str[i] != '\0' ; i++)
		count++;
		
	return count;
}
