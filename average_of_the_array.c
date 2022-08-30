#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n],i;
    float sum=0,mean=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
   printf("%.2f",mean);
}