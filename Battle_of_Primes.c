#include<stdio.h>
int main()
{
    int n1,n2,c,p,i,s,j;
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    p=s;
    for(i=1;i<=10;i++)
    {
        p+=1;
        c=0;
        for(j=1;j<=p;j++)
        {
            if(p%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",p-s);
            break;
        }
    }
}