#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    if(iNo < 0 )
    {
        printf("Ivalid Input\n");       // Filter
    }
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\n",iMult);
    }

}
    

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}