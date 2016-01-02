//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

int find (char a[], char x);

int main ()
{
    char a[100];
    char x;
    int i = 0;
    while (1)
    {
        scanf ("%c", &a[i]);
        if (a[i] == '\n')
        {
            break;
        }
        i ++;
    }
    printf("x = ");
    scanf ("%c", &x);
    printf ("The Num = %d \n", find (a, x));
    return 0;
}

int find (char a[], char x)
{
    int ct = 0, i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == x)
        {
            ct ++;
        }
        i ++;
    }
    if (ct == 0)
    {
        return 0;
    }
    else
    {
        return ct;
    }
}