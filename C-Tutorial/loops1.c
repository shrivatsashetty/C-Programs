#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num<0){        // if (test condition) {contents of program to be executed}
        printf("The entered number is negative %d\n",-num);
        printf("if loop is executed now");
    }
    else{printf("the entered number is %d\n",num);
        printf("else loop is executed");
    } // if test condition is false then C skips the if loop and come to else loop & vice versa
        return 0;
}
