#include<stdio.h>
int main()
{
    int n;
    int not_prime=0;
    int i=2;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1){
        printf("%d is not prime",n);
    }
    else
    {
        do{ 
            if(n%i==0 && n!=2){//we take not prime condition because A number is prime only if it is not divisible by any number from 2 to n-1
                not_prime=1;
                break;
            }
            i++;
        }while(i<n);
            if(not_prime){
            printf("%d is not prime\n",n);
            }
            else{
            printf("%d is prime\n",n);
            }
    }
    return 0;
}