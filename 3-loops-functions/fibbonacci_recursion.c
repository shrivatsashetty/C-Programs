#include<stdio.h>

void fibbonacci(int n);

int a=0,b=1,buffer;
int main(){
    int n;
    printf("=====FIBBONACCI SERIES=====\n\nEnter how many terms: ");
    scanf("%d",&n);
    printf("%d,",0);
    fibbonacci(n);
    printf("\b \n"); // '\b' is an escape sequence to backspace last character
    return 0;
}


void fibbonacci(int n){
    
    if(n == 1){return;}  
    buffer= 0;
    printf(" %d,",b);
    buffer = a;
    a=b;
    b+=buffer;
    fibbonacci(n-1); // recursion
   
}