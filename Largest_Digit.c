#include<stdio.h>
int main()
{
    int n,rem,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(large<rem)
        {
            large=rem;
        }
        n=n/10;
    }
    printf("%d",large);
}