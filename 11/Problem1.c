#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ",iCnt);
    }
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

    RangeDisplay(iValue1, iValue2);
    return 0;
}
// Time complexity - O(N) where N is the number of elements in the range.