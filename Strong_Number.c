#include<stdio.h>
int fact(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int s=0,r,n,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=s+fact(r);
        t=t/10;
    }
    if(s==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
}