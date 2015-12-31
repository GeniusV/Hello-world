#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,per,area,s;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a<b+c && b<a+c && c<a+b)
    {
        per = a+b+c;
        s=per/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Perimeter=%f\n",per);
        printf("area=%f\n",area);
    }
    else
    {
        printf("Error!  CANNOT FORM AN TRAN!!\n");
    }
    return 0;
}