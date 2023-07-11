/* cheking for uppercase or lowercase using ASCII values of character */

#include<stdio.h>

int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("the character is in  uppercase\n");

    }
    else if(ch >= 'a' && ch <= 'z'){ 
        printf("the character is in lowercase\n");
    }
    else{
        printf("Not an english alphabet\n");
    }

}