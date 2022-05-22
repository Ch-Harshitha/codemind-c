#include<stdio.h>
int main()
{
    int a,i=1,sum=0;
    scanf("%d",&a);
    for(i;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}