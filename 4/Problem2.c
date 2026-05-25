#include<stdio.h>

void DecFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo /2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }

    
}


int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    DecFact(iValue);
    return 0;
}