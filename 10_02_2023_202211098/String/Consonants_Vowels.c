#include<stdio.h>
int main()
{
	char string[20];
	int vowel = 0, consonant = 0;
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	for (int i = 0 ; string[i] != '\0' ; i++)
		printf("%c", string[i]);
	for (int i = 0 ; string[i] != '\0' ; i++)
	{
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
		   string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||string[i] == 'O' ||string[i] == 'U')
		   	vowel++;
		   	
		else
			consonant++;
	}
	
	printf("Vowels: %d\tConsonants: %d\n" , vowel , consonant);
	return 0;
}

