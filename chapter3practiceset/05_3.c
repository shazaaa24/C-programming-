//https://www.asciitable.com/
#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter a character\n");
    scanf("%c",&alphabet);
    if(alphabet>=97 && alphabet<=122){
        printf("character is lowercase");
    }
    else{
        printf("character is uppercase");
    }
    return 0;
}