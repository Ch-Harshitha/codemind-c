#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*a,j,fact=0;
    float avg,s=0,c=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
            s+=a[i];
            c++;
        }
    }
    avg=s/c;
    printf("%.2f",avg);
    return 0;
}