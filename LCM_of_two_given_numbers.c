#include<stdio.h>
int main()
{
    int a,b,max,lcm,n;
    scanf("%d%d",&a,&b);
    if(a>b)
    max=a;
    else
    max=b;
    while(1)
    {
    if(max%a==0&&max%b==0)
    {
        lcm=max;
        break;
    }
    max++;
    }
    printf("%d",lcm);
    
    
}