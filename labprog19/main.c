#include <stdio.h>
#include <stdlib.h>

void input1(int m,int n, int a[m][n])
{
    int i,j;
    printf("enter the matrices a(m*n) \n");
            for(i=0 ; i<m ; i++)
               {
                  for(j=0 ; j<n ; j++)
                    {
                      printf("a[%d][%d]\n",i,j);
                       scanf("%d",&a[i][j]);
                    }
                }
}


void input2(int p,int q, int b[p][q])
{
    int i,j;
    printf("enter the matrices b(p*q) \n");
            for(i=0 ; i<p ; i++)
               {
                  for(j=0 ; j<q ; j++)
                    {
                      printf("b[%d][%d]\n",i,j);
                       scanf("%d",&b[i][j]);
                    }
                }
}

void matrix(int m, int n, int a[m][n], int p, int q, int b[p][q], int c[m][q])
{
   int i,j,k;

   for(i=0 ; i<m ; i++)
    {
      for(j=0 ; j<q ; j++)
        {
        c[i][j]=0;
          for(k=0 ; k<n ; k++)
            {
                c[i][j]= (c[i][j] + (a[i][k] * b[k][j]));
            }
         }
     }
}


int main()
{
int m,n,p,q,i,j;

printf("enter the element of matric a(m*n)m=,n=\n");
scanf("%d%d",&m,&n);
printf("enter the element of matric B(p*q)p=,q=\n");
scanf("%d%d",&p,&q);

int a[m][n],b[p][q],c[m][q];

 if(n!=p)
    {
 printf("can't multiply wrong input!!! try again \n");
      }
  else {
      
      input1(m,n,a);
      input2(p,q,b);
      matrix(m,n,a,p,q,b,c);
      
       }
       
for(i=0 ; i<m ; i++)
    {
      for(j=0 ; j<q ; j++)
        {
        printf("c[%d][%d] = %d \n",i,j,c[i][j]);
        }
     }

return 0;

}
