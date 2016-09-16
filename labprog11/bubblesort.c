#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int a[100],swap, i,k,n;

printf("enter the no of elements\n");
scanf("%d",&n);

for(i=0;i<n;i++)
  {
  printf("a[%d]= ",i);
  scanf("%d", &a[i]);
      }

  for(i=0; i<n; i++)
  {
     for(k=0; k<=n-1-i; k++)
     {
        if(a[k]> a[k+1])
        {
          swap = a[k];
          a[k] = a[k+1];
          a[k+1] = swap;

        }

     }

  }

  printf("sorted list in ascending order is\n");
  for(i=0;i<n;i++)
     printf("%d\n",a[i]);
return 0;
 

}
