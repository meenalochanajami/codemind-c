#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float c,b,t,su;
    if(u<=199)
    {
        c=1.20;
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=c*u;
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    if(b>=400)
    {
        su=0.15*b;
    }
    else
    {
        su=0.00;
    }
    t=b+su;
    printf("Surcharge: %.2f
",su);
    printf("Total Amount: %.2f
",t);
    
}