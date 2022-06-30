#include<stdio.h>
#include<limits.h>
int main()
{
    int n,max=INT_MAX;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q;
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]<p || a[i]>q)
        {
         if(max>a[i])
         {
             max=a[i];
         }
        }
    }
if(max==INT_MAX)
{
    printf("-1");
}
else
{
    printf("%d",max);
}
}
    