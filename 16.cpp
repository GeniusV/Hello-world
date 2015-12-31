//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int count (int x, int a);
int main ()
{
    int x, a;
    printf ("x = ");
    scanf ("%d", &x);
    printf ("a = ");
    scanf ("%d", &a);
    printf ("ct = %d", count (x, a));
    return 0;
    
}
int count (int x, int a)
{
    int ct = 0;
    while (x != 0)
    {
        if (x % 10 == a)
        {
            ct ++;
        }
        x = x / 10;
    }
    return ct;
}