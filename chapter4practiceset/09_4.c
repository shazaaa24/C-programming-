#include<stdio.h>
int main()
{
    int product = 1;
    int i=1;
    int n;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n){
        product*=i;
        i++;
    }
    printf("%d",product);
    return 0;
}