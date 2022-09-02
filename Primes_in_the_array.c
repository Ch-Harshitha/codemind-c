#include<stdio.h>
int main()
{
    int n,i,a[2000],j,fact=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            c++;
        }
    }
    printf("%d",c);
}