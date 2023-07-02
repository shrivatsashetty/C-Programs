// sum of first n natural numbers using recursiuons

#include<stdio.h>

int summation(int number);

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    int result = summation(number);
    printf("the sum is of first %d numbers is %d\n",number,result);

    return 0;
}

int summation(int number){
    
    int total = 0;

    if(number == 0){
        return total;
    }

    total = number + summation(number - 1);
    return total;  // the control never comes here

    }