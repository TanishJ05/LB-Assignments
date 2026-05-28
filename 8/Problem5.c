#include<stdio.h>

double SquareMeter(int iValue)
{
    double dAns = 0.0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    dAns = iValue * 0.0929;
    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is : %lf\n",dRet);
    
    
    return 0;
}