#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 2) != 0 )
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
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
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    iRet = OddProduct(Brr, iLength);
    printf("Product of Odd elements is : %d\n",iRet);
    free(Brr);
    return 0;
}