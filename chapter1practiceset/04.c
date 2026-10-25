#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("enter principal amount: ");
    scanf("%d",&p);
    printf("\nenter rate of intrest: ");
    scanf("%f",&r);
    printf("\nenter time: ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("simple intrest is %f",si);
    return 0;
}    
