#include<stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("the value of a is 1");
        break;
        case 2:
        printf("the value of a is 2");
        break;
        case 3:
        printf("the value of a is 3");
        break;
        case 4:
        printf("the value of a is 4");
        break;
        default:
        printf("nothing is matched");   
    }
    return 0;
}