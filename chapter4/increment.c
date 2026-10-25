#include<stdio.h>
int main()
{
    int i=0;
    printf("%d\n",i++);//print 0 and became 1
    printf("%d\n",i++);//print 1 and became 2
    // printf("%d\n",i++);//print 2 and became 3
    // printf("%d\n",i++);//print 3 and became 4
    // printf("%d\n",i++);//print 4 and became 5
    // printf("%d\n",i++);//print 5 and became 6
    // printf("%d\n",i++);//print 6 and became 7
    printf("%d\n",++i);//print 3 
    printf("%d\n",i+=2);//print 5 cuz i+=2 is same as i=i+2
    printf("%d\n",i-=2);//print 3 cuz i-=2 is same as i=i-2
        return 0;
}