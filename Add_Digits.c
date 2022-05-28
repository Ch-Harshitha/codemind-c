#include<stdio.h>
int main()
{
    long int num;
    int sum=0,rem;
    scanf("%ld",&num);
    while(num/10!=0)
    {
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        num=sum;
    }
    printf("%d",sum);
}