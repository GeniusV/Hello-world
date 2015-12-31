//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int fun (int num);
int main ()
{
    int a, b;
    printf ("a = ");
    scanf ("%d", &a);
    printf ("b = ");
    scanf ("%d", &b);
    printf ("ANS = %d \n", fun (a) + fun (b));
}
int fun(int num )
{
    int ct, i, res = 0, locct;
    int a[100];
    for (ct = 0; num > 0; ct ++)
    {
        a[ct] = num % 10;
        num = num / 10;
    }
    locct = ct;
    for (i = 0; i <= ct; i ++)
    {
        res = res + a[locct - 1] * pow (10, i);
        locct --;
    }
    return res;
}