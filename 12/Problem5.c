#include<stdio.h>

int CountFreq(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
        
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( iDigit < 6 )
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRet = CountFreq(iValue);
    printf("%d\n",iRet);
    return 0;
}