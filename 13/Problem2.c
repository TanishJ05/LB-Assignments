#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements which are divisible by 5 are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 5) == 0 )
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
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
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }
    
    Display(Brr, iLength);
    
    free(Brr);
    return 0;
}