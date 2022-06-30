#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int a[n],i,x,y;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            if(sum<a[i])
            {
                sum=a[i];
            }
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",sum);
    }
}