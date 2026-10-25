#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    printf("enter num3:\n");
    scanf("%d",&num3);
    printf("enter num4:\n");
    scanf("%d",&num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is greater",num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("%d is greater",num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("%d is greater",num3);
    }
    else{
        printf("%d is greater",num4);
    }
    return 0;
}