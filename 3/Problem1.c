#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Input\n");
        return;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\n",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}