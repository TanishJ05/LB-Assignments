#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;
    
    for(i = 1; i <= iRow; i++)
    {
            if(i % 2 == 0)
            {
                iCnt = 1;
            }
            else
            {
                iCnt = 2;   
            }
            for(j = 0; j < iCol; j++,iCnt += 2)
            {
                printf("%d\t",iCnt);
            }
            printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}
