#include<stdio.h>

void TableReverse(int iNo)
{
    int iCnt = 0;
    int iT = 0;
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iT = iNo * iCnt;
        printf("%d\n",iT);
    }
    
    
}
int main()
{
    int iValue = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

     TableReverse(iValue);

     return 0;
}