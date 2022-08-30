#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i,re;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&re);
    for(i=0;i<n;i++)
    {
        if(re==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}