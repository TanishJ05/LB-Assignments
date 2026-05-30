#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;
        
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( iDigit == 0 )
        {
            bFlag = TRUE;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag; 
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("Zero is present in the number\n");
    }
    else    
    {
        printf("Zero is not present in the number\n");
    }
    
    return 0;
}