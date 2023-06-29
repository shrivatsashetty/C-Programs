#include <stdio.h>

int main(){

    float pi = 3.14;
    float* ptr = &pi;
    float** p2ptr = &ptr;
    int x = 0;
    printf("main pointer points to adress: %p\n",ptr);
    printf("pointer to pointer points to: %p\n",p2ptr);
    printf("adress of pointer to pointer is %p\n",&p2ptr);
    printf("adress of variable x is %p\n",&x);
    printf("vaue at p2ptr = %p\n",p2ptr);
    printf("value at ptr accesed via p2ptr = %f\n",**p2ptr);
    printf("Size of ptr = %lu bytes\n",sizeof(ptr)); // 8 bytes
    printf("size of p2ptr = %lu bytes\n",sizeof(ptr)); // 8 bytes
    return 0;
}
