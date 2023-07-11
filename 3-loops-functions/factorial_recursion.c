#include<stdio.h>

int factorial(int number);

int main(){
    int number,result;
    printf("Enter a number: ");
    scanf("%d",&number);
    result = factorial(number);
    printf("%d factorail is %d\n",number,result);
    return 0;
}

// recursive function 
int factorial(int number){
// an effiecint way is to use if else statement  
    if(number == 0){
        return 1;
    }
    else {return number * factorial(number - 1);}

}