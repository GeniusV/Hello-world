//
//  Main.c
//  Homework
//
//  Created by EilotDaniel on 12/30/15.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void itostr (char str[], int n);
int main()
{
    int n, ct = 0;
    char str[100];
    printf ("n = ");
    scanf ("%d", &n);
    itostr (str, n);
    for (ct = 0; str[ct] != '\0'; ct ++)
    {
        printf ("%c", str[ct]);
    }
    printf ("\n");
    return 0;
}
void itostr (char str[], int n)
{
    sprintf (str, "%d", n);
}