//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

void sort (int score[], int n);
int main ()
{
    int score[100];
    int i, n;
    printf ("n = ");
    scanf ("%d", &n);
    for (i = 0; i < n; i ++)
    {
        printf ("num = ");
        scanf ("%d", &score[i]);
    }
    sort (score, n);
    for (i = 0; i < n; i ++)
    {
        printf ("%d \n", score[i]);
    }
    return 0;
}
void sort (int score[], int n)
{
    int a[100];
    int ct, i, biggestNum;
    for (i = 0; i < n; i ++)
    {
        a[i] = 0;
        for (ct = 0; ct < n; ct ++)
        {
            if (score[ct] > a[i])
            {
                a[i] = score [ct];
                biggestNum = ct;
            }
        }
        score[biggestNum] = 0;
    }
    for (i = 0; i < n; i ++)
    {
        score[i] = a[i];
    }
}