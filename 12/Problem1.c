#include<stdio.h>

void ReverseDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d",iDigit);
            iNo = iNo / 10;   
        }
        printf("\n");
        
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    ReverseDigit(iValue);
    
    return 0;
}