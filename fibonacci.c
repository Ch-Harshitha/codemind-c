#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,Term;
    scanf("%d",&n);
    printf("%d %d",t1,t2);
    Term=t1+t2;
    for(i=0;i<n-2;++i)
    {
        printf(" %d",Term);
        t1=t2;
        t2=Term;
        Term=t1+t2;
    }
    return 0;
}