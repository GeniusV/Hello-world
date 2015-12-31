//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>
void fun (int m);
int main()
{
    int m;
    printf ("m = ");
    scanf ("%d", &m);
    fun (m);
    return 0;
}
void fun (int m)
{
    int i;
    float sum = 0;
    for (i = 2; i <= m; i ++)
    {
        sum = sum + 1.0 / i;
    }
    sum = 1 - sum;
    printf ("t = %f \n", sum);
}