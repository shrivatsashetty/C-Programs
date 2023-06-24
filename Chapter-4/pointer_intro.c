#include<stdio.h>

int main(){

    int myage = 22;
    int *myptr = &myage;
    printf("pointer value: %p\n",&myptr); // 0x7ffc1704d564 or some hex value
    int value_at = *myptr;

}