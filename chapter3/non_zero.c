#include<stdio.h>
int main()
{
    if(1){
        printf("no. is executed");
    }
    if(23.13){
        printf("\nfloat is executed");
    }
    if('c'){
        printf("\nchar is executed");
    }
    if(0){ //0 is always false
        printf("\nno. is not executed"); 
    }
    return 0;
}