#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0;
    printf("Elements in the range are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd) )
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");
    
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);
    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    Brr = (int *)malloc(sizeof(int)* iLength);

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    
    Range(Brr,iLength,iValue1,iValue2);
    
    free(Brr);
    return 0;
}