#include<stdio.h>
int main()
{
    int a,b,i,c,j,flag=0;
  scanf("%d %d",&a,&b);
  if(a==1)
  a=a+1;
  for(i=a;i<=b;i++)
  {
      c=0;
      flag=0;
      for(j=2;j<i;j++)
      {
    if(i%j==0){
              flag=1;
              break;
          }
      }
          if(flag==0)
      printf("%d
",i);
  }
}