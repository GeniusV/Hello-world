//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int prime (int m);
int main ()
{
    int m, n, ct = 0, num, sum = 0;
    printf ("m = ");
    scanf ("%d", &m);
    printf ("n = ");
    scanf ("%d", &n);
    if (m > n)
    {
        printf ("ERROR! m > n \n");
    }
    else
    {
        for (num = m; num <= n; num ++)
        {
            if (prime (num) == 1)
            {
                ct ++;
                sum = sum + num;
            }
        }
        printf ("Num = %d \n", ct);
        printf ("Sum = %d \n", sum);
    }
    return 0;
}

int prime (int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
            break;
        }
    }
    if (i >= num)
    {
        return 1;
    }
    else
        return -1;
}