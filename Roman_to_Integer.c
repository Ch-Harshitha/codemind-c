#include<stdio.h>
#include<string.h>
int convert(char);
int main()
{
    int i=0,num=0;
    char romanNumber[100];
    scanf("%s",&romanNumber);
    while(romanNumber[i])
    {
        if(convert(romanNumber[i])<0)
        {
            return 0;
        }
        if(strlen(romanNumber-i)>2)
        {
            if(convert(romanNumber[i])<convert(romanNumber[i+2]))
            {
                printf("
Invalid Roman Number.
");
                return 0;
            }
        }
        if(convert(romanNumber[i])>=convert(romanNumber[i+1]))
        num=num+convert(romanNumber[i]);
        else
        {
            num=num+(convert(romanNumber[i+1])-convert(romanNumber[i]));
            i++;
        }
        i++;
    }
    printf("%d",num);
    return 0;
}
int convert(char ch)
{
    int value=0;
    switch(ch)
    {
        case'I':value=1;break;
        case'V':value=5;break;
        case'X':value=10;break;
        case'L':value=50;break;
        case'C':value=100;break;
        case'D':value=500;break;
        case'M':value=1000;break;
        caseNULL:value=0;break;
        default:value=-1;
    }
    return value;
}