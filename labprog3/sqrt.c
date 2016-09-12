#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{


    float r1,r2,num,diff;

  printf("Enter a no.\n");
  scanf("%f",&num);

  r1=1;
  r2=num/r1;
  diff=fabs(r1-r2);

  while(diff>0.000001)
  {
    r1=(r1+r2)/2;
    r2=num/r1;
    diff=fabs(r1-r2);
    printf("r1=%f  r2=%f  diff=%f\n",r1,r2,diff);
  }
  printf("square root = %f",r1);


    return 0;

}
