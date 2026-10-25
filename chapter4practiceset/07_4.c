#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=1;i<=10;i++){
        sum += i*8;
    }
    printf(" the sum of multiplication table of 8 is %d",sum);
    return 0;
}