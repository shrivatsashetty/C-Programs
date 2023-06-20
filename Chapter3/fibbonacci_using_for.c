#include<stdio.h>

void fibbonacci(int n);

int main(){
    int n;
    printf("Enter how many terms: ");
    scanf("%d",&n);
    printf("%d",0);
    fibbonacci(n);
    return 0;
}


void fibbonacci(int n){
    int a=0,b=1,buffer;
    for(int i=n;i>=1;i--){
        buffer= 0;
        printf(" %d",b);
        buffer = a;
        a=b;
        b+=buffer;
    }
    return;
}