#include<stdio.h>
#include<math.h>
int main()
{
    int m,num;
    float s, sum = 0;
    printf ("m = ");
    scanf ("%d", &m);
    if (m % 2 == 0)
    {
        m = m - 1;
    }
    for (num = 1; num <= m; num = num + 2)
    {
        sum = sum + log (num);
    }
    s = sqrt (sum);
    printf ("s = %f", s);
    return 0;
}