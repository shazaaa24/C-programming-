#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first numbers:\n");
    scanf("%d",&a);
    printf("enter second numbers:\n");
    scanf("%d",&b);
    a>b?printf("first number is greater"):printf("second number is greater");//this is a ternary operator which is used to check the condition and print the result accordingly
    return 0;
}