#include<stdio.h>

void DisplayEvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo  ; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }
    
    printf("Factorial is : %d\n",iFact);
    
}
int main()
{
    int iValue = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

     DisplayEvenFactorial(iValue);

     return 0;
}