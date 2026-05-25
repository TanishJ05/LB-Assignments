#include<stdio.h>

int DivideTwoNumbers(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        printf("Division by zero is not allowed\n");
        return -1;

    }
    iAns = iNo1/iNo2;
    return iAns;
}


int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

    iRet = DivideTwoNumbers(iValue1, iValue2);
    printf("Division is : %d\n",iRet);

    return 0;
}