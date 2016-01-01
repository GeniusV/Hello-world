//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int calcDays (int y, int m, int d);
int main ()
{
    int days1, days2, y1, y2, m1, m2, d1, d2;
    printf ("Student 1 :(y,m,d) \n");
    scanf ("%d,%d,%d", &y1, &m1, &d1);
    printf ("Student 2 :(y,m,d) \n");
    scanf ("%d,%d,%d", &y2, &m2, &d2);
    days1 = calcDays (y1, m1, d1);
    days2 = calcDays (y2, m2, d2);
    printf("ANS = %d \n", abs(days1 - days2));
}

int calcDays (int y, int m, int d)
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, days = 0;
    
    if ((y % 4 ==0 && y % 100 != 0) || y % 400 == 0)
    {
        a[2] = 29;
    }
    else
    {
        a[2] = 28;
    }
    for (i = 1; i < m; i ++)
    {
        days = days + a[i];
    }
    days = days + d;
    return days;
}