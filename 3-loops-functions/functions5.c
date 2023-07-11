#include<stdio.h>

void namaste();
void vanakkam();

int main(){
    vanakkam(); // indirect calling of vanakkam()
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void vanakkam(){
    printf("vanakkam\n");
    namaste();
}