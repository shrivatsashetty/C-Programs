#include<stdio.h>

int sum(int a){
    if(a>0){
    a+=sum(a-1);
    return a;
    }
    else return 0;

    
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of first %d numbers is %d\n",n,sum(n));

}