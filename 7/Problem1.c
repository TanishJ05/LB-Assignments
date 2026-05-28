#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" * ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" # ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

     DisplayPattern(iValue);

     return 0;
}