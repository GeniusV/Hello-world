#include<stdio.h>

int main()
{
    int x;
    float y;
    printf("x=");
    scanf("%d",&x);
    if(x<0)
    {
        y=0;
    }
    else if(x<=15)
    {
        y=4.0*x/3;
    }
    else
    {
        y=2.5*x-10.5;
    }
    printf("%f",y);
    return 0;
}