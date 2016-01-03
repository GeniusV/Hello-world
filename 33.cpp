//
//  Main.c
//  Homework
//
//  Created by Daniel Eilot on 2016/1/4.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>

void delBlankSpace (char str[]);
int main ()
{
    char str[100];
    gets(str);
    delBlankSpace(str);
    puts(str);
    return 0;
}

void delBlankSpace (char str[])
{
    int i, ct;
    for (i = 0; str[i] != '\0'; i ++)
    {
        if (str[i] == ' ')
        {
            for (ct = i; str[ct] != '\0'; ct ++)
            {
                str[ct] = str[ct + 1];
            }
            str[ct + 1] = '\0';
        }
    }
}