#include<stdio.h>
int main(){
    char c;
    printf("enter an alphabet: ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("The entered alphabet is a vowel");

    }
    else{
        printf("The entered alphabet is consonant \n");
    }

}
