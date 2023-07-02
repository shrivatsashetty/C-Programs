#include <stdio.h>

void multi_function(int a, int b, float* avg, int* sum, int* product);

int main(){
    int a = 15, b = 10, sum, product;
    float avg;
    int* sumptr = &sum;
    int* productptr = &product;
    float* avgptr = &avg;
    printf("value of a is %d and b is %d\n",a,b);
    multi_function(a, b, avgptr, sumptr, productptr);
    printf("Their sum is %d\n", sum);
    printf("Their average is %f\n", *avgptr);
    printf("Their product is %d\n", product);



    return 0;
}

void multi_function(int a, int b, float* avg, int* sum, int* product){

    *avg = (a+b)/2.0; // if u divide by 2 then it will return a integer type
    *sum = a+b;
    *product = a*b;

    return;

}
