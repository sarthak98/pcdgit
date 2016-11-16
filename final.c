#include<stdio.h>

int first(int year)
{
    int f;
    f = year / 100;
    return f;
}

int last(int year)
{
    int l;
    l = year % 100;
    return l;
}

int calc(int m,int l,int f,int d)
{
    int x;
    x = d + (((13*m)-1)/5) + l +(l/4) + (f/4) - (2*f);
    if(x>7)
    {
        x = x%7;
        return x;
    }
    else
    {
        return x;
    }
    return x;
}
int mon(int month)
{
    int m;

switch(month)
{
case 1:
    m = 11;
    break;
case 2 :
    m = 12;
    break;
case 3 :
    m = 1;
    break;
case 4 :
    m = 2;
    break;
case 5:
    m = 3;
    break;
case 6 :
    m = 4;
    break;
case 7 :
    m = 5;
    break;
case 8 :
    m = 6;
    break;
case 9 :
    m = 7;
    break;
case 10 :
    m = 8;
    break;
case 11 :
    m = 9;
    break;
case 12 :
    m = 10;
    break;
default :
    m = 0;
}
return m;
}

int main()
{
  int year,f,l,x,date,r,month;

    printf("Enter the date\n");
    scanf("%d",&date);

    printf("Enter the month in number format\n");
    scanf("%d",&month);

    printf("Enter the year\n");
    scanf("%d",&year);

    f = first(year);
    l = last(year);
    r = mon(month);
    x = calc(r,l,f,date);

    if(x>7)
    {
        x = x%7;
    }
    else
    {

    }


switch(x)
{
      case 1 :
         printf("\nMONDAY\n" );
         break;
      case 2 :
          printf("\nTUESDAY\n" );
         break;
      case 3 :
         printf("\nWEDNESDAY\n" );
         break;
      case 4 :
         printf("\nTHURSDAY\n" );
         break;
      case 5:
         printf("\nFRIDAY\n" );
         break;
      case 6:
         printf("\nSATURDAY\n" );
         break;
      case 0:
         printf("\nSUNDAY\n" );
         break;
      default :
         printf("Invalid year\n" );

}
 return 0;


}




