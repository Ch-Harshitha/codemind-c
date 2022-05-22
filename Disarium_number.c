#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,y,r,i=1,sum=0,ans=0;
    scanf("%d",&a);
    x=y=a;
    while(a>0)
    {
        sum++;
        a=a/10;
    }
    for(sum;x>0;sum--)
    {
        r=x%10;
        ans+=pow(r,sum);
        x=x/10;
    }
    if(y==ans)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}