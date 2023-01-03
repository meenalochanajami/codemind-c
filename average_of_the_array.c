#include<stdio.h>
int main()
{
    int i,n,s1=0;
    float avg;
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
    avg=(float)s1/n;
    printf("%.2f",avg);
    
}
