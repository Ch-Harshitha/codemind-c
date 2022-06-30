#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n],s=0;
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
            s+=a[i];
        }
    }
    printf("%d",s);
}