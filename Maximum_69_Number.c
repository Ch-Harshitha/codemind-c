#include<stdio.h>
#include<math.h>
int main()
{
int n,s=0,ans,r;
scanf("%d",&n);
ans=(int)log10(n);
while(n>0)
{
   r=n/(int)ceil(pow(10,ans));
   if(r==6 && s==0)
   {
       printf("9");
       s=1;
   }
   else
   {
       printf("%d",r);
   }
       n=n%(int)ceil(pow(10,ans));
       ans--;
}
}