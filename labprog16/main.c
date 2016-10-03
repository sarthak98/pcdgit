#include <stdio.h>
#include <stdlib.h>

int matrix(int m, int n, int a[m][n], int b[m][n], int c[m][n])
{
   int i,j;

   for(i=0 ; i<m ; i++)
    {
      for(j=0 ; j<n ; j++)
        {

                c[i][j]=  (a[i][j] + b[i][j]);

         }
     }

for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            {
            printf("c[%d][%d]=%d",i,j,c[i][j]);
            printf("\n");
            }
    }

return c[i][j];
}


int main()
{
int m,n,r,i,j;

printf("enter the element of matric a(m*n),b(m*n) m= , n= \n");
scanf("%d", &m );
scanf("%d", &n);


int a[m][n],b[m][n],c[m][n];


   printf("enter the matrices a(m*m) \n");
            for(i=0 ; i<m ; i++)
               {
                  for(j=0 ; j<n ; j++)
                    {
                      printf("a[%d][%d]\n",i,j);
                       scanf("%d",&a[i][j]);
                    }
                }

      printf("enter the matrices b(m*m) \n");
         for(i=0 ; i<m ; i++)
               {
                 for(j=0 ; j<n ; j++)
                    {
                     printf("b[%d][%d]\n",i,j);
                      scanf("%d",&b[i][j]);
                    }
               }

printf("new matrix is\n ");
r=matrix (m,n,a,b,c);

    return r;


      }

