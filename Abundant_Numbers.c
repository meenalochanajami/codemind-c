#include<stdio.h>
int main()
{
    int n,i,a,b=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            scanf("%d",&i);
            b=b+i;
        }
    }
    
       if(n<b)
      {
        printf("True");
      }
      else
      {
        printf("False");
      }
      
    }
    
    
    
