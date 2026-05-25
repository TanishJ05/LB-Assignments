#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    iNo = -iNo;  // Updater
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* $ ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}