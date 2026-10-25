#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n;i;i--){//in test i is a non zero value
        printf("%d\n",i);
    }
    return 0;
}