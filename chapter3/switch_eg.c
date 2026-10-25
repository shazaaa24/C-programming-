#include<stdio.h>
int main()
{
    char grade;
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        grade = 'A';
        printf("your grade is A");
    }
    else if(marks<=90 && marks>=80){
        grade = 'B';
        printf("your grade is B");
    }
    else if(marks<=80 && marks>=70){
        grade = 'C';
        printf("your grade is C");
    }
    else if(marks<=70 && marks>=60){
        grade = 'D';
        printf("your grade is D");
    }
    else if(marks<=60 && marks>=50){
        grade = 'E';
        printf("your grade is E");
    }
    else{
        grade = 'F';
        printf("you are failed");
    }
    return 0;
}