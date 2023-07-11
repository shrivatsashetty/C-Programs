#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i!=1){printf("x");}
        printf("%d",i);
        fact*=i;
    }
    printf("=%d",fact);
}