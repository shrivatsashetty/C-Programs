// function to add two numbers

#include <stdio.h>

int add(int a , int b);  // prototype of the function

int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);

    printf("enter another number: ");
    scanf("%d",&b);

    int sum = add(a,b); // calling the function
    printf("the sum of the numbers is: ");
    printf("%d \n",sum);
    
    return 0;
}

// definition of the function
int add(int a, int b){  
    return a + b;
}