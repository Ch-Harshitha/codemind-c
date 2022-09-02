#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*a,j,fact=0;
    int k,c=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            if(a[i]>=k)
            {
            c++;
            }
        }
    }
    //avg=s/c;
    printf("%d",c);
    return 0;
}