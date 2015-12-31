#include<stdio.h>
#include<math.h>
int main()
{
    int y, ct = 0;
    for (y = 2001; y <= 2100; y++)
    {
        if((y % 4 ==0 && y % 100 != 0) || y % 400 == 0)
        {
            printf ("%d ",y);
            ct++;
            if (ct % 5 == 0)
            {
                printf ("\n");
            }
        }
    }
    printf ("\n");
    return 0;
}