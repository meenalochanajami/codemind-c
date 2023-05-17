#include<stdio.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    s=0;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
    
    
}