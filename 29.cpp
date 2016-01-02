//
//  Main.c
//  Homework
//
//  Created by Daniel Eilot on 2016/1/2.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void dele (char str[], char ch);
int main ()
{
    char str[100];
    char ch;
    gets (str);
    printf ("Del >");
    ch = getchar ();
    dele (str, ch);
    puts (str);
    return 0;
}
void dele (char str[], char ch)
{
    int i, ct;
    for (i = 0; str[i] != '\0'; i ++)
    {
        if (str[i] == ch)
        {
            ct = i;
            while (1)
            {
                str[ct] = str[ct + 1];
                if (str[ct] == '\0')
                {
                    break;
                }
                ct ++;
            }
        }
    }
}