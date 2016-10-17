#include<stdio.h>
#include<stdlib.h>
int c=0;
int binarysearch(int a[],int m,int n)
{
 
    int left,right,mid;
left=0,right=n-1;
    while(left<=right)
        {
         mid=(left+right)/2;
         if(m==a[mid])
            {
             c=1;
             break;
         }
         else if(m<a[mid])
            {
             right=mid-1;
         }
         else
             left=mid+1;
    }
    return mid;
}
int main()
{
 
    int a[100],i,n,m,pos;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order:\n ");
    for(i=0;i<n;i++)
        {
         scanf("%d",&a[i]);
    	}
 
    printf("Enter the number to be search: ");
    scanf("%d",&m);
        pos=binarysearch(a,m,n);
 
     
    if(c==0)
         printf("The number is not found.\n");
    else
         printf("The number is found at position %d\n",pos+1);
 
    return 0;
}
