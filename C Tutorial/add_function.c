// function to add two numbers

#include <stdio.h>

int add(int a , int b);

int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum of the numbers is: ");
    printf("%d \n",sum);
    
    return 0;
}

int add(int a, int b){
    return a + b;
}