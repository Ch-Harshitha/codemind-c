#include<stdio.h>
int main()
{
    int n,st=0,se=1,su,p,q;
    scanf("%d",&n);
    int a[100],i,j;
    for(i=0;i<n;i++)
    {
        a[i]=st;
        su=st+se;
        st=se;
        se=su;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=n && a[i+1]>=n)
        {
            p=a[i];
            q=a[i+1];
            break;
        }
    }
    if((n-p)>(q-n))
    {
        printf("%d",q);
    }
    else if((n-p)<(q-n))
    {
        printf("%d",p);
    }
    else if((n-p)==(q-n))
    {
        printf("%d %d",p,q);
    }
}