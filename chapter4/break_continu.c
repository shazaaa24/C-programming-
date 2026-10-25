#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=15;i++){
        if(i==5 || i==1){
            continue;
        }
        if(i==11){
            break;
        }
        printf("%d ",i);
    }
    return 0;
}