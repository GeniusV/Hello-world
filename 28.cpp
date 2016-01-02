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

void reverse (char str[]);
int main ()
{
    char str[100];
    int i;
    printf ("DO NOT enter more than 99\n");
    gets(str);
    reverse (str);
    for (i = 0; str[i] != '\0'; i ++)
    {
        printf ("%c", str[i]);
    }
    printf("\n");
    return 0;
}
void reverse (char str[])
{
    char temp[100];
    int i, ct = 0;
    while(1)
    {
        temp[ct] = str[ct];
        if (str[ct] == '\0')
        {
            break;
        }
        ct ++;
    }
    for (i = 0; i < ct; i ++)
    {
        str[i] = temp[ct - 1 - i];
    }
    str[ct] = '\0';
}