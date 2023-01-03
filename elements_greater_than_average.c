#include<stdio.h>
int main()
{
    int n,i,s1=0,avg,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
    }
    avg=s1/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            count=count+1;
            
        }
    }
    printf("%d",count);
}