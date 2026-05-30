#include<stdio.h>

void RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("Sum of numbers in the range is : %d",iSum);
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);
    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1, iValue2);
    return 0;
}
// Time complexity - O(N)