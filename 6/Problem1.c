#include<stdio.h>

void DisplayNum(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Number is Medium");
    }
    else
    {
        printf("Number is large");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
     printf("Enter the number : ");
     scanf("%d",&iValue);

     DisplayNum(iValue);

     return 0;
}