#include<stdio.h>
#include<math.h>
 int main()
{
    float a,b,c,d,r1,r2,rr,ir;
    printf("Enter the coefficient of the quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        r1=r2=(-b/(2*a));
        printf("roots are equal r1=r2=%f\n",r1);
    }
    else if(d>0)
    {
        r1=(-b+(sqrt(d))/(2*a));
        r2=(-b-(sqrt(d))/(2*a));
        printf("roots are real and distinct r1=%f and r2=%f",r1,r2);
    }
    else
    {
    rr=(-b/(2*a));
    ir=(sqrt(-d))/(2*a);
    printf("roots are imaginary r1=%f+i%f and r2=%f+i%f",rr,ir,rr,ir);
    }

return 0;
}
