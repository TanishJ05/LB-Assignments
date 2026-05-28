#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iT = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
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

     Table(iValue);

     return 0;
}