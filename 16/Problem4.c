#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    printf("Number that contains 3 Digits in the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < 0)
        {
            Arr[iCnt] = -Arr[iCnt];
        }
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999) 
        {
            printf("%d ",Arr[iCnt]);
        }
        
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
    Digits(Brr, iLength);
    free(Brr);

    return 0;
}