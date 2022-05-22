#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
        product*=r;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}