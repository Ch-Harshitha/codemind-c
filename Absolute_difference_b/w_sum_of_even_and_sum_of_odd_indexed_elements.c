#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    int a[n],i,esum=0,osum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        esum+=a[i];
        if(i%2!=0)
        osum+=a[i];
    }
    res=esum-osum;
    printf("%d",abs(res));
}