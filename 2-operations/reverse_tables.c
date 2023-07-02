#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(int i=10; i>0; i--){
        printf("%d X %d = %d\n",number,i,number*i);
    }
}       