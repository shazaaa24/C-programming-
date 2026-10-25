#include<stdio.h>
int main()
{
    float c, f;
    printf("enter temperature in celsius: ");
    scanf("%f",&c);
    f=(9.0/5.0)*c+32;
    printf("\ntemperature in fahrenheit is %f",f);
    return 0;
}