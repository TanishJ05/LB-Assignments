#include<stdio.h>
#include<stdlib.h>

void SumDigits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("Summation of digits of each number is:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

    iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

        printf("%d\t", iSum);
    }
}  

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)* iLength);

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements : ",iLength);
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    SumDigits(Brr, iLength);
    free(Brr);

    return 0;
}