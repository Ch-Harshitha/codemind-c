#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp,c;
    float s=0,k=0;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               c++;
               if(i!=j)
               {
                   a[j]=0;
               }
           }
       }
       if(a[i]!=0)
       {
           printf("%d %d ",a[i],c);
       }
   }
}