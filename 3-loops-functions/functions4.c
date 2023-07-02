#include<stdio.h>

void printHello();
int i;

int main(){
    int rep;
    printf("How many times you want hello?\n");
    scanf("%d",&rep);
    for(int i=1;i<=rep;i++){
        printf("%d .",i);
        printHello();
    }
    return 0;
}

void printHello(){
    printf("Hello! from function\n");
}