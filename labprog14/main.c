#include <stdio.h>
int facto(int num)
{
    int fact;
    
    if(num==0)
    {
        fact=1;
    }
    else
    {
        fact=num*facto(num-1);
    }
  
  return fact; 
   }


int main()
{
    int n,a;
    printf("enter the number \n");
    scanf("%d",&n);
    
    a=facto(n);
    
    printf("factorial of %d is %d",n,a);
  
    
 return 0;  
}
