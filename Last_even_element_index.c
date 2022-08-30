#include<stdio.h>
int main()
{
    int n,b; 
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            b=i;
        }
    }
    printf("%d",b);
}