//pre incerement operator
#include<stdio.h>
int main(){
    int b=1,a=2;
    printf("intial value of a is %d\n",a);
    printf("intial value of b is %d\n",b);
    b=++a+2; // a is incremented first and then used in the expression 
    printf("pre increment value of a is %d\n",a);
    printf("new value of b is %d\n",b);

}