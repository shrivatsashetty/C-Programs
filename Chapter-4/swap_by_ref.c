#include <stdio.h>

void swap(int* x,int* y);

int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("initially a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping a = %d and b = %d\n",a,b);

    return 0;
}

void swap(int*  x, int* y){
    int buffer;
    buffer = *x;
    *x = *y;
    *y = buffer;
    return ; // returns nothing
}
