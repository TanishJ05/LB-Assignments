#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tHex\tOct\tSymbol\n");
    printf("---------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%X\t%o\t%c\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}