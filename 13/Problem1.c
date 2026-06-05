#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0, iSumOdd = 0, iDiff = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0 )
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    iRet = Difference(Brr, iLength);
    printf("Difference between summation of even and odd elements is : %d\n",iRet);
    free(Brr);
    return 0;
}