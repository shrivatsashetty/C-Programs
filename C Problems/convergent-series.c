//to demonstrate the convergence of serries 1/3^n

#include<stdio.h>
#include<math.h>

int main(){
    int it,n,i;
    double sum=0;
    printf("Enter no of iterations: ");
    scanf("%d",&it);
    for(n=1;n<=it;n++){

    sum+=1/pow(3,n);

    }
    printf("The sum of the series is %lf \n",sum);
    return 0;
}