#include<stdio.h>

int KmToMeter(int iNo)
{
    int iAns = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iAns = iNo * 1000;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
     printf("Enter the Distance : ");
     scanf("%d",&iValue);

     iRet = KmToMeter(iValue);

    printf("Distance in Meter is : %d\n",iRet);

     return 0;
}