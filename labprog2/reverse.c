#include<stdio.h>
int main ()
{
    int num,reverse=0;
    printf("Enter the number\n");
    scanf("%d",&num);

    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num=num/10;
    }
    printf("the reverse of the number is=%d\n",reverse);
    if(reverse==num)
    {
        printf("%d is a palindrome number\n",reverse);
    }
    else
    {
        printf("%d is not a palindrome number",reverse);
    }
    return 0;
}
