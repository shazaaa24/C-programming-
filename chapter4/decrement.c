#include<stdio.h>
int main()
{
    int i=0;
    printf("%d\n",i);//print 0 became -1
    --i;//print -1 
    printf("%d\n",i);

    return 0;
}