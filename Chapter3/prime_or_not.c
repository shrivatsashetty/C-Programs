// The program continiously asks input from the user untill he/she enters a prime number

#include<stdio.h>

int checkPrime(int n);

int main(){
    int number;
    printf("The program will run as long as you input a prime number\n");
    while(1){
        printf("\nEnter a number: ");
        scanf("%d",&number);
        if(checkPrime(number) == 1){
            break;
        }

    }
    return 0;
}

int checkPrime(int n){
    int flag = 1; // flag = 1 for prime 
    if(n == 0 || n == 1){
        printf("%d is neither prime nor composite\n",n);
        return 0; // return; ends the function
    }
    else if(n < 0){
        printf("%d is a negative number hence not a prime\n",n);
        return 0;
    }

    for(int i=2;i<n;i++){
        if(n%i == 0 && i!=1){
            flag=0;
        }
    }
    if(flag == 0){
        printf("%d is a composite number\n",n);
        return 0;
    }
    else{
        printf("%d is a prime number\n",n);
        return 1;
    }

}