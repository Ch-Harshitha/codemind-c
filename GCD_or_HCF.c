#include<stdio.h>
int main()
{
    int a,b,gcd,count=1;
    scanf("%d %d",&a,&b);
    while(count<=a && count<=b)
    {
        if(a%count==0 && b%count==0)
        {
            gcd=count;
        }
        count++;
    }
    printf("%d
",gcd);
}