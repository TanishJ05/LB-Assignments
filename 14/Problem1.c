#include<stdio.h>
#include<stdlib.h>

int CountFrequecy(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0 )
        {
            iCount++;
        }
    }
    return iCount;
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
    iRet = CountFrequecy(Brr, iLength);
    printf(" even elements are : %d\n",iRet);
    free(Brr);
    return 0;
}