#include<stdio.h>
int main()
{
    int h,b,w,c,a1,a2,a,f;
    scanf("%d%d%d%d",&h,&b,&w,&c);
    a1=(2*w+h)*(2*w+b);
    a2=h*b;
    a=a1-a2;
    f=a*c;
    printf("%d",f);
    
    
}