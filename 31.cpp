//
//  Main.c
//  Homework
//
//  Created by Daniel Eilot on 2016/1/4.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>

int main ()
{
    int i = 0, ct = 0;
    char str[100], out[100];
    gets(str);
    for (i = 0; str[i] != '\0'; i ++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            out[ct] = str[i];
            ct ++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            out[ct] = str[i] + 32;
            ct ++;
        }
    }
    out[ct] = '\0';
    puts (out);
    return  0;
}