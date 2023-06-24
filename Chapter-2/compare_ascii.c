#include<stdio.h>

int main(){
    printf("%d\n",('a'<'z')); // 1
    printf("%d\n",('a'>'z')); // 0
    char alpha = 'a';
    printf("initially alpha value is %c\n",alpha);
    ++alpha; // character increment, C internally  increments the ASCII value of the character
    printf("After one step ASCII increment alpha :%c\n",alpha);
    alpha += 2; // ASCII value incremented by 2
    printf("After two step increment alpha:%c\n",alpha);
    return 0;
}