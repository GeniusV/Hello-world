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
    int  min = 0, max = 0, n, ct, num;
    printf ("n = ");
    scanf ("%d", &n);
    for (ct = 1; ct <= n; ct ++)
    {
        scanf ("%d", &num);
        if (prime (num) == 0)
            continue;
        if (ct == 1)
        {
            min = num;
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }
    printf ("Max = %d \n", max);
    printf ("Min = %d \n", min);
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