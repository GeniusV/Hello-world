//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>
int main()
{
    int i, a, n, ct, num = 0, sum = 0;
    printf ("a = ");
    scanf ("%d", &a);
    printf  ("n = ");
    scanf ("%d", &n);
    for (ct = 1; ct <= n; ct ++)
    {
        for (i = 1; i <= ct; i++)
        {
            num = num + a * pow (10, i-1);
        }
        sum = sum + num;
        num = 0;
    }
    printf ("Sum = %d \n", sum);
    return 0;
}