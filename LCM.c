#include<stdio.h>
int main()
{
    int a,b,lcm,temp,gcd,num;
    scanf("%d %d",&a,&b);
    int num1=a,num2=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=(num1*num2)/gcd;
    printf("%d",lcm);
}