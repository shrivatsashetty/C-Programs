#include<stdio.h>

void sayHi(int count);

int main(){
    sayHi(5);
    return 0;
}

void sayHi(int count){
    if(count == 0){
        return;
       };
    printf("Hi %d\n",count);
    sayHi(count - 1); // calling itself agian with different argument
    
}