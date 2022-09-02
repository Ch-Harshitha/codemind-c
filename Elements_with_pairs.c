#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    if(n%2!=0)
    {
        printf("0");
    }
}