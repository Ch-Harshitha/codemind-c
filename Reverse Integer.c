#include<stdio.h>
int main()
{
    int n,reverse=0,res;
    scanf("%d",&n);
    while(n!=0)
    {
        res=n%10;
        reverse=reverse*10+res;
        n=n/10;
    }
    printf("%d",reverse);
}