#include <stdio.h>
 
int main()
{
  int i, a = 99, count; 
  

  while(a <= 999)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
	break;
      }
      i++;	
    }	
    if(count == 0 && a != 1 )
    {
	printf("\t%d ", a);
    }
    a++; 
  }
  return 0;
}
