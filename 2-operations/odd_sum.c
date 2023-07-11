// print first n odd numbers in reverse and print their sum
// formula for sum of first n even no's is n(n+1)
// formula for sum of first n even no's is n^2

#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("First %d odd numbers are\n",n);
    for(int i=2*n-1; i>0; i-=2){
        printf("%d\n",i);
        sum+=i;
    }
    printf("\nThe sum of all the above numbers is: %d\n",sum);
    return 0;

}