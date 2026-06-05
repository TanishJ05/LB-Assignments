#include<stdio.h>
#include<stdlib.h>

int CountFrequencyDiff(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountEven = 0, iCountOdd = 0, iDiff = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0 )
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    iDiff = iCountEven - iCountOdd;
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
    iRet = CountFrequencyDiff(Brr, iLength);
    printf(" Frequency Diffrenece is : %d\n",iRet);
    free(Brr);
    return 0;
}