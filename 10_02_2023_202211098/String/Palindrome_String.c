#include<stdio.h>
int length(char *str);
int check(char *arr , int n);
int main()
{
	
	char string[20];
	printf("Enter a String:\t");
	scanf("%[^\n]s" , string);
	int l = length(string);
	int flag = check(string , l);
	if(flag = 1)
		printf("Is A Palindrome!\n");
	else
		printf("Not a Palindrome!\n");
	return 0;
}
int length(char *str)
{
	
	int count = 0;
	for (int i = 0 ; str[i] != '\0' ; i++)
		count++;
		
	return count;
}
int check(char *arr , int n)
{
	int temp = 0;
	for(int i = 0; i < n/2; i++)
	{
		if(*(arr+i) == *(arr + (n-1) - i))
			temp++;
	}
	if(temp == n/2)
		return 1;
	else
		return 0;
}
