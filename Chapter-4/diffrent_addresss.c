#include <stdio.h>

void printAddrByValue(int n);
void printAddrByRef(int* n);

int main(){
    int n = 2;
    int* numptr = &n;
    printf("n is a variable with value %d\n",n);
    printf("The orignal address of variable is %p\n",numptr);
    printAddrByValue(n);
    printAddrByRef(numptr);
    return 0;    
}

void printAddrByValue(int n){

    printf("adress of the variable via call by value func is %p\n",&n);
}

void printAddrByRef(int* n){
    printf("The address via call by reference function is %p\n",n);
}
