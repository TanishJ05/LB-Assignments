#include<stdio.h>

int DollarToInr(int iNo)
{
    int iAns = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iAns = iNo * 70;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

    iRet = DollarToInr(iValue);
    printf("Dollar to INR is : %d\n",iRet);

     return 0;
}