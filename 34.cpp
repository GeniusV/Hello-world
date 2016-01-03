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
    int num;
    float sum = 0;
    FILE *fp1;
    if ((fp1 = fopen ("/Users/GeniusV/Desktop/data.txt", "a")) == NULL)
    {
        printf ("ERROR!! \n");
        return -1;
    }
    
    while (!feof (fp1))
    {
        fscanf (fp1, "%d", &num);
        sum = sum + num;
        
    }
    fprintf (fp1, "%f", sum);
    fclose (fp1);
    
    return 0;
}