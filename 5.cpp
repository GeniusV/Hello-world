#include<stdio.h>
int main()
{
    float weight;
    int ctBad = 0, ctNor = 0, ctOver = 0;
    while (1)
    {
        scanf ("%f", &weight);
        if (weight == -1)
        {
            break;
        }
        if (weight <= 40)
        {
            ctBad ++;
        }
        else if (weight <= 59)
        {
            ctNor ++;
        }
        else
        {
            ctOver ++;
        }
    }
    printf ("Bad: %d \n", ctBad);
    printf ("Normal: %d \n", ctNor);
    printf ("Over: %d \n", ctOver);
    return 0;
}