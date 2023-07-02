// print voting eligiblity using ternary operator

#include<stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    (age >= 18) ? printf("You are eligible to vote") : printf("You can vote after %d years\n",18-age);

    return 0;
}