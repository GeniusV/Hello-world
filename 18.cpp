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
    int num, i, res = 0, degctrl; // result, digitalCtrl
    int a[100], ct = 0;
    while (num != -1)
    {
        printf ("num = ");
        scanf ("%d", &num);
        while (num >= 10)
        {
            num = num /10;
        }
        a[ct] = num;
        ct ++;
    }
    degctrl = ct - 2;
    for (i = 0; i < ct - 1; i ++)
    {
        res = res + a[i] * pow (10, degctrl);
        degctrl --;
    }
    printf ("Result = %d \n", res);
}