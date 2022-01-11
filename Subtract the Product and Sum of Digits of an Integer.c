#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1,res;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
        res=product-sum;
    }
    printf("%d",res);
}