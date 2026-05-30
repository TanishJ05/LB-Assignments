#include<stdio.h>

double FhToCs(float fTemp)
{
    double dTemperature = 0.0;
    dTemperature = (fTemp - 32) * 5 / 9;
    return dTemperature;   
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("enter the temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius is : %lf\n",dRet);
    
    return 0;
}
// Time complexity - O(1)