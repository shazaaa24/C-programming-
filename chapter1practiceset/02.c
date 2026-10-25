#include<stdio.h>
int main()
{
    float r,pi,h,a;
    pi=3.14;
    printf("enter the radius: ");
    scanf("%f",&r);
    printf("\nenter the height: ");
    scanf("%f",&h);
    a=pi*r*r*h;
    printf("volume of a cylinder is %f",a);
    return 0;
}