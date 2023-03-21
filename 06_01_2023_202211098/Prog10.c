#include<stdio.h>
int main()
{
	int n , num;
	printf("Enter a Number: ");
	scanf("%d" , &n);
	num = (n*2)-1;
	for(int i = 1; i<=n ; i++ ){
		for(int j = 1; j<=num ; j++){
			if(j<=n){			
				if(j+i >= n+1)
					printf("* ");
				else
					printf("  ");
			}else if(j>=n+1){
				if(i + n > j)
					printf("* ");
				else
					printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
