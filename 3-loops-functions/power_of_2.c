/* Program to claculate power of two recursively */
#include <stdio.h>
#include <math.h>

int twoPowerN(int n);

int main(){
    
    int n;
    printf("Enter power: ");
    scanf("%d",&n);
    int answer = twoPowerN(n);
    printf("Answer is %d\n", answer);
    

    return 0;
}


int twoPowerN(int n){
    if(n == 0){
        return 1;
    }
    else {
        return 2 * twoPowerN(n-1);
    }
    
}