#include<stdio.h>
int main()
{
float a[10],x,z=0;
int i;
printf("enter the coefficients\n");
for(i=0;i<=4;i++)
  {
  printf("a[%d]= ",i);
  scanf("%f", &a[i]);
  }
printf("enter the value of x\n");
scanf("%f", &x);
for(i=4; i>=0; i--)
{
z=z*x+a[i];
}
printf("f(%f)=%f",x,z);
return 0;
}
