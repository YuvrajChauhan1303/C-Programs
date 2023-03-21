#include<stdio.h>
int length(char *str);
int main()
{
	char string[20];
	int prev , count , index;
	prev = count = index = 0;
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	int l = length(string);
	for(int i = 0; i<l ; i++)
	{
		for(int j = i+1 ; j<l ; j++)
		{
			if(string[i] == string[j] && string[i] != 0)
			{
				count++;
				string[j] = 0;
			}
		}
		
		if(count >= prev)
		{
			prev = count; 
			index = i;
			count = 0;
		}
	}
	
	printf("The Maximum repeating character is %c\n" , string[index]);
	return 0;
}
int length(char *str)
{
	
	int count = 0;
	for (int i = 0 ; str[i] != '\0' ; i++)
		count++;
		
	return count;
}
