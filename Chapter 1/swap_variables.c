#include<stdio.h>

int main(){

    int a=5,b=10;
    int buffer;
    printf("initial value if a is %d and b is %d\n",a,b);
    
    buffer = a;
    a=b;
    b=buffer;

    printf("After swap value of a is %d and b is %d\n",a,b);
    
    printf(" ");


}