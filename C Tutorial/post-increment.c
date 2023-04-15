#include<stdio.h>
int main(){
    int a=1,b=0;
    printf("intially a is %d &  b is %d \n",a,b);
    b=a++;// b is assigned initial value of initial value of a i.e 1 then value of a is incremented
    printf("after b=a++ \n      b=%d i.e b is assigned initial value of a \n",b);
    printf("post increment of a is %d \n",a);
    

}