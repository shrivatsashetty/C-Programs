// printing english alphabets from a-z and A-Z using ASCII values

#include<stdio.h>

int main(){
    for(char i='a';i<='z';i++){
        printf(" %c",i);
    }
    printf("\n");

    for(char alpha='A';alpha<='Z';alpha++){
        printf(" %c",alpha);
    }
    printf("\n");

}