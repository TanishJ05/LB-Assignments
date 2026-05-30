#include<stdio.h>

double RectangleArea(float fHeight, float fWidth)
{
    double dArea = 0.0;
    dArea = fHeight * fWidth;
    return dArea;

}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;
    
        printf("enter the height : ");
        scanf("%f",&fValue1);
    
        printf("enter the width : ");
        scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);

    return 0;
}

// Time Complexity - O(1)