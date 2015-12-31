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
    int i, ct = 1;
    float n, sum = 0;
    for (i = 1; fabsf(n) >= 0.00001; i = i + 2)
    {
        n = 1.0 / i;
        if (ct % 2 == 0)
        {
            n = -n;
        }
        sum = sum + n;
        ct ++;
    }
    printf ("PI = %f \n", 4 * sum);
    return 0;
}