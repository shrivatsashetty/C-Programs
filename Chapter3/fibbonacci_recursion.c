#include<stdio.h>

void fibbonacci(int n);

int a=0,b=1,buffer;
int main(){
    int n;
    printf("Enter how many terms: ");
    scanf("%d",&n);
    printf("%d",0);
    fibbonacci(n);
    return 0;
}


void fibbonacci(int n){
    
    if(n == 1){return;}  
    buffer= 0;
    printf(" %d",b);
    buffer = a;
    a=b;
    b+=buffer;
    fibbonacci(n-1); // recursion
   
}