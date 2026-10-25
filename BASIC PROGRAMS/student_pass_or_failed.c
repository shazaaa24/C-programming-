#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your maths marks:\n");
    scanf("%d",&a);
    printf("enter your chemistry marks:\n");
    scanf("%d",&b);
    printf("enter your physics marks:\n");
    scanf("%d",&c);
    printf("The marks are %d,%d,%d\n",a,b,c);
    if(a<33 || b<33 || c<33){
        printf("you are failed due to less marks in individual subjects\n");
    }
    else if((a+b+c)/3 <40){//to find average marks
        printf("you are failed due to less percentage\n");
    }
    else{
        printf("you have passed!\n");
    }
    return 0;
}