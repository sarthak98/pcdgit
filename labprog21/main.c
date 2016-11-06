#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input(int n, int a[n])
{
  int i;
for(i=0;i<n;i++)
  {
  printf("a[%d]= \n",i);
  scanf("%d", &a[i]);
  }
}

void sort(int n, int a[n])
{
 int swap,i,k;
 
  for(i=0; i<n-1; i++)
  {
     for(k=0; k<n-1-i ; k++)
     {
        if(a[k]>a[k+1])
        {
          swap = a[k];
          a[k] = a[k+1];
          a[k+1] = swap;

        }

     }

  }


}

int main()
{
int n,i;
printf("enter the no of elements \n");
scanf("%d",&n);
 int a[n];
  
  input(n,a);
  sort(n,a);
  printf("sorted list in ascending order is \n");
  for(i=0;i<n;i++)
  {
     printf("%d \n",a[i]);
  }
return 0;
}
