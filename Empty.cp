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

int myAtoi (char str[]);
int main()
{
    int a;
    char str[100];
    gets (str);
    a = myAtoi (str);
    printf ("a = %d \n", a);
    return 0;
}
int myAtoi (char str[])
{
    int sign, i = 1, num = 0, start;    //start is where to start loop
    if (str[0] == '-')
    {
        sign = -1;
        start = 1;
    }
    else
    {
        sign = 1;
        start = 0;
    }
    for (i = start; str[i] != '\0'; i ++)
    {
        num = num * 10 + (str[i] - '0');
    }
    return num * sign;
    
}