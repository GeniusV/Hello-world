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
    int n, i, num = 1, sum = 0;
    printf ("n = ");
    scanf ("%d", &n);
    for (i = 1; i <= n; i ++)
    {
        sum = sum + num * i;
        num = num * i;
    }
    printf ("Sum = %d \n", sum);
    return 0;
}