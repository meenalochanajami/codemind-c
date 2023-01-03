#include<stdio.h>
int main()
{
    int n,i,s1=0,flag=0;
    scanf("%d",&n);
    int a[n];
    int avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
    }
    avg=s1/n;
    scanf("%d",&avg);
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}