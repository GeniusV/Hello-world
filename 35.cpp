//
//  35.c
//  Hello - World
//
//  Created by Daniel Eilot on 2016/1/5.
//  Copyright © 2015 GeniusV. All rights reserved.
//
#include<stdio.h>

int main ()
{
    int num, i = 0, ct = 0;
    float sum = 0;
    FILE *fp1;
    if ((fp1 = fopen ("/Users/GeniusV/Desktop/data.txt", "r")) == NULL)
    {
        printf ("ERROR!! \n");
        return -1;
    }
    
    while (!feof (fp1))
    {
        fscanf (fp1, "%d", &num);
        if (num >= 60)
        {
            ct ++;
        }
        sum = sum + num;
        i ++;
        
    }
    printf ("Sum = %f \n", sum);
    printf ("AVG = %f \n", sum / i);
    
    fclose (fp1);
    
    return 0;
}