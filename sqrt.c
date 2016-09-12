#include<stdio.h>
int main()
{
    float  root,x,n,i;
    printf("enter the number\n");
    scanf("%f",&n);

    x=1;
    for(i=1;i<=30;i++)
    {
        root=(x*x+n)/(2*x);
        x=root;
    }
    printf("root is %f\n",root);
    return 0;
}


