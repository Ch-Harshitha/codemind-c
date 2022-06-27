#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    int f,l;
    scanf("%d
%d
",&f,&l);
    int c=0,i;
    for(n=f;n<=l;++n)
    {
        if(n==1)
        continue;
        s=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0)
        {
            ++c;
        }
    }
    printf("%d",c);
}