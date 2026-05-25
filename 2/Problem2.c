#include<stdio.h>

void Display(int iNo)
{
    // write updater
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }
}


int main()
{
    int iValue = 0;

    printf("enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}