#include <stdio.h>
#include <stdlib.h>

int trns(int m, int n, int a[m][n], int trans[n][m])

{
  int i,j;
   for(i=0; i<m; ++i)
    {
      for(j=0; j<n; ++j)
      {
       trans[i][j]=a[j][i];
      }
    }

for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
            {
            printf("trans[%d][%d]=%d",i,j,trans[i][j]);
            printf("\n");
            }
    }

return trans[i][j];


}



int main()
{
  int m,n,i,j,r;

  printf("enter the element of matric a(m*n)m=,n=\n");
   scanf("%d%d",&m,&n);

   int a[m][n],trans[n][m];

   printf("enter the matrices a(m*n) \n");
            for(i=0 ; i<m ; i++)
               {
                  for(j=0 ; j<n ; j++)
                    {
                      printf("a[%d][%d]\n",i,j);
                       scanf("%d",&a[i][j]);
                    }
                 }

   r=trns(m,n,a,trans);

   printf("transpose of the matrix is\n");
   return r;
}
