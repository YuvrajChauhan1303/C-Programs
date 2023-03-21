#include<stdio.h>
int rev_num(int num);
int main(){
    int num , result;
    int temp = 0;
    int rem = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
    rem = num % 2;
    num = num/ 2;
    temp = temp*10 + rem;
    }
   
   	
    printf("%d" , rev_num(temp));
   
}

int rev_num(int num)
{
 
    int temp = 0, rev_num;
    
 	while(num>0)
 	{
		rev_num = num % 10;
		num = num /10;
		temp= temp*10 + rev_num;
   	}
   	
   return temp;
   	
}
