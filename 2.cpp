#include<stdio.h>

int main()
{
    int ect=0,numct=0,oct=0,n;
    char ch;
    while(ch != '\n')
    {
        scanf("%c",&ch);
        n=ch;
        if( (n>=65 && n<=90) || (n >= 97 && n<=122 ))
        {
            ect++;
        }
        else if(n>=48 && n<= 57)
        {
            numct++;
        }
        else
        {
            oct++;
        }
    }
    printf("English letter = %d\n",ect);
    printf("Number = %d\n",numct);
    printf("Other = %d\n",oct);
    
    return 0;
}