#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0 )
    {
        printf("Ivalid Input\n");       // Filter
    }
    for(iCnt =1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}