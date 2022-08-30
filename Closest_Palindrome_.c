#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,ldif,udif,r,cp,sp;
    for(i=n-1;i>=n-20;i--)
    {
        j=i;
        r=0;
        while(j>0)
        {
            r=r*10+j%10;
            j/=10;
        }
        if(r==i)
        {
            cp=i;
            break;
        }
    }
    for(i=n+1;i<=n+20;i++)
    {
       j=i;
        r=0;
        while(j>0)
        {
            r=r*10+j%10;
            j/=10;
        }
        if(r==i)
        {
            sp=i;
            break;
        }   
    }
    ldif=n-cp;
    udif=sp-n;
   if(ldif<udif)
   {
       printf("%d",cp);
   }
   else if(ldif==udif)
   {
       printf("%d %d",cp,sp);
   }
   else
   {
       printf("%d",sp);
   }
}