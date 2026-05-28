#include<stdio.h>

void DisplayEvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    int iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo  ; iCnt += 2)
    {
        iFact1 = iFact1 * iCnt;
    }
    for(iCnt = 2; iCnt <= iNo  ; iCnt += 2)
    {
        iFact2 = iFact2 * iCnt;
    }
    iDiff = iFact2 - iFact1;
    printf("Factorial is : %d\n",iDiff);
    
}
int main()
{
    int iValue = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

     DisplayEvenFactorial(iValue);

     return 0;
}