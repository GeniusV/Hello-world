//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>
int main ()
{
    int i = 0, x, ct, per = 1, perct;
    float e, num = 1, sum = 0, res;
    printf ("x = ");
    scanf ("%d", &x);
    printf ("e = ");
    scanf ("%F", &e);
    for (ct = 2; fabsf(num) >= e; ct++)
    {
        for (perct = 1; perct <= i; perct ++)
        {
            per = per * perct;
        }
        num = (pow (x, i) * 1.0) / per;
        if (ct % 2 == 1)
        {
            num = - num;
        }
        sum = sum + num;
        i = i + 2;
    }
    res = 1 - sum;
    printf ("cos = %f \n", res);
}