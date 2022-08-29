#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n],i,sum=0,mean=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
   //printf("%d",mean);
    for(i=0;i<n;i++)
    {
        if(a[i]==mean)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}