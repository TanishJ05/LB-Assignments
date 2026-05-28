#include<stdio.h>

void DisplayFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

     DisplayFactorial(iValue);

     return 0;
}