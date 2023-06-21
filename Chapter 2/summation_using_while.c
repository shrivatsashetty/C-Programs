#include<stdio.h>

int main(){
    int n,sum=0,counter=1;
    printf("Enter a natural number:");
    scanf("%d",&n);
    while(counter<=n){
        sum+=counter;
        counter+=1;
    }
    printf("The sum of first %d natural no's is %d\n",n,sum);

}