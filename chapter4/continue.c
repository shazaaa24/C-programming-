#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int skip;
    printf("enter number to skip:");
    scanf("%d",&skip);
    int i;
    for(i=1;i<=n;i++){
        if(i==skip){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}