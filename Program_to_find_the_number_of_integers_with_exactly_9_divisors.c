#include<stdio.h>
int count_no(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    return c;
}
void check(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(count_no(i)==9)
        {
            printf("%d ",i);
            c++;
        }
    }
    printf("
Total=%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}