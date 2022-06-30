#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}