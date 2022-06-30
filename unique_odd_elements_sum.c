#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            if(a[i]%2)
            {
                s+=a[i];
            }
        }
    }
    printf("%d",s);
}