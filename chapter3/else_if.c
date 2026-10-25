#include<stdio.h>
int main()
{
    int age = 36;
    if(age>=60){
        printf("you can drive and you are a senior citizen");//if this statement is true then it stops here else check next
    }
    else if(age>=40){
        printf("you can drive and you are adult");//if true stops here else check next
    }
    else if(age>=18){
        printf("you can drive");//if true stops here else check next
    }
    else{
        printf("you cannot drive");//otherwise this statement will be printed
    }
    return 0;
}