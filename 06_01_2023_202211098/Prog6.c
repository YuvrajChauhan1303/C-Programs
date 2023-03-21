#include<stdio.h>
int main(){
    int num;
    int rev_num;
    int temp = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while(num>0){
        rev_num = num % 10;
        num = num /10;
        temp = temp*10 + rev_num;
    }
    printf("%d" , temp);
}