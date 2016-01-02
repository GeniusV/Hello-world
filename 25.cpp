//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>

void reverse (int p[], int n);

int main ()
{
    int p[100];
    int n, i;
    printf ("n = ");
    scanf ("%d", &n);
    for (i = 0; i < n; i ++)
    {
        printf ("NUM = ");
        scanf ("%d", &p[i]);
    }
    reverse (p, n);
    
    for (i = 0; i < n; i ++)
    {
        printf ("%d \n", p[i]);
    }
    return 0;
}
void reverse (int p[], int n)
{
    int a[100];
    int i;
    for (i = 0; i < n; i ++)
    {
        a[i] = p[n - 1 - i];
    }
    for (i = 0; i < n;i ++)
    {
        p[i] = a[i];
    }
}