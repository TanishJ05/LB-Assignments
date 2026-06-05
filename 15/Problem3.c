#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }   
    return iIndex;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int)* iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    printf("Enter the element to search the Last Occurenence : \n");
    scanf("%d",&iValue);
    iRet = LastOcc(Brr,iLength,iValue);
    if(iRet == -1)
    {
        printf("Element is not present in the array\n");
    }
    else
    {
        printf("Last Occurence of element is : %d\n",iRet);
    }
    free(Brr);
    return 0;
}