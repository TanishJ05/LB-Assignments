#include<stdio.h>

int DiffOfDigit(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0, iSumOdd = 0, iDiff = 0;
        
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if( iDigit % 2 == 0 )
            {
                iSumEven = iSumEven + iDigit;
            }
            else{
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo / 10;
            
        }
        iDiff = iSumEven - iSumOdd;
        
    return iDiff; 
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRet = DiffOfDigit(iValue);
    printf("%d\n",iRet);
    return 0;
}