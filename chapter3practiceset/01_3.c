#include<stdio.h>
int main()
{
    int a = 10;
    if(a=11){ //"=" is an assignment operator and its a non zero value so this is true
        printf("a is 11");//therefore first statement is printed
    }
    else{
        printf("a is not 11");
    }
    return 0;
}