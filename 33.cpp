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
    int ct = 0, num;
    float sum = 0;
    FILE *fp1, *fp2;
    if ((fp1 = fopen ("/Users/GeniusV/Desktop/data.txt", "r")) == NULL)
    {
        printf ("ERROR!! \n");
        return -1;
    }
    if ((fp2 = fopen ("/Users/GeniusV/Desktop/result.txt", "w")) == NULL)
    {
        printf ("Error!! \n");
        return -1;
    }
    while (!feof (fp1))
    {
        fscanf (fp1, "%d", &num);
        if (num % 2 == 0)
        {
            fprintf (fp2, "%d ", num);
            ct ++;
            sum = sum + num;
        }
    }
    fclose (fp1);
    fclose (fp2);
    printf ("Count = %d \n", ct);
    printf ("sum = %.0f \n", sum);
    printf ("Average = %.2f \n", sum / ct);
    return 0;
}