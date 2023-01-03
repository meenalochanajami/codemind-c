#include<stdio.h>
int main()
{
    int min,i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[0];
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}