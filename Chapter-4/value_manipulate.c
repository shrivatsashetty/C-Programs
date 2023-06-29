#include <stdio.h>
int main(){
    int* ptr;
    int x;

    ptr = &x;
    *ptr = 2;
    printf("x = %d\n",x); // x = 2
    *ptr++;
    printf("x = %d\n",x);
    *(&x)+=3;
    printf("x = %d\n",x);
}