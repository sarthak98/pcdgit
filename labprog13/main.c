#include <stdio.h>

int isprime(int n)
{
    int i,p;
    
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
           //is not prime
        }
        else 
            {
            p=1;
            //is prime
            }
        
    }
}

int main()
{
    int num,a;
    
    printf("enter the number\n");
    scanf("%d", &num);
    
    a=isprime(num);
    
    if(a==0)
    {
        printf("its not a prime\n");
    }
    else
    {
        printf("its  prime\n");
    }
    
    return 0;
}
