#include<stdio.h>
int main()
{
    int ct = 0, i, num, sum = 0;
    printf ("num = ");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 7 == 0 || i % 17 == 0)
        {
            printf ("%6d ", i);
            ct ++;
            if (ct % 5 == 0)
            {
                printf ("\n");
            }
            sum =  sum + i;
        }
    }
    printf ("\nSum = %d \n", sum);
    return 0;
}