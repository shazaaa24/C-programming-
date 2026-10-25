#include<stdio.h>
int main()
{
    int a = 4;
    int b = 3;
    int c;
    c=a+b;
    printf("the value of a is %d and the value of b is %d and sum of both is %d",a,b,c);
    //modulus operator is used to find the reminder
    int d;
    d=a%b;
    printf("\nthe modulus value of a and b is %d",d);
    return 0;
}