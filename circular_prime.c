#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,n,r=0;
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        r=r*10+t%10;
        t=t/10;
    }
    if(prime(n)&&prime(r))
    {
        printf("circular prime");
    }
    else if(prime(n)||prime(r))
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}