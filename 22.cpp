//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int ctleap (int y);
void getDay (int y, int m, int d, int days, int *resYear, int *resMonth, int *resDay);
int main ()
{
    int y, m, d, days, resYear, resMonth, resDay;
    printf ("Input year, month, day (y,m,d) :");
    scanf ("%d,%d,%d", &y, &m, &d);
    printf ("Input how many days later:");
    scanf ("%d", &days);
    getDay (y, m, d, days,&resYear, &resMonth, &resDay);
    printf ("%d days after %d.%d.%d is %d.%d.%d. \n", days, y, m, d, resYear, resMonth, resDay);
    return 0;
}

// Judge if is a leap year.
int ctleap (int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// Put in present year, month, day and ** days later, the date will be.
void getDay (int y, int m, int d, int days, int *resYear, int *resMonth, int *resDay)
{
    int i, end = 0;
    int a[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31};
    days = days + d;    // Make it easier to loop.
    while (1)           // Year loop.
    {
        if (ctleap (y) == 1)
        {
            a[2] = 29;
        }
        else
        {
            a[2] = 28;
        }
        for (i = m; i <= 12; i ++)
        {
            if (days > a[i + 1])
            {
                days = days - a[i];
            }
            else
            {
                end = 1;    //Signal for the target is achieved.
                break;
            }
        }
        if (end == 1)
        {
            *resYear = y;
            *resMonth = i;
            *resDay = days;
            break;
        }
        else
        {
            y ++;
            m = 1;
        }
        
    }
}