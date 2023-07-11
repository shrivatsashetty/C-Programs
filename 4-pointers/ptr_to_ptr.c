#include <stdio.h>

int main(){

    float pi = 3.14;
    float* ptr = &pi;
    float** p2ptr = &ptr;
    int x = 0;
    printf("ptr is pointing to adress of varible pi which is %p\n",ptr);
    printf("pointer to pointer i.e p2ptr is pointing to adress of ptr which is: %p\n",p2ptr);
    printf("adress of pointer to pointer i.e p2ptr using '&' operator is %p\n",&p2ptr);
    printf("adress of variable x is %p\n",&x);
    printf("vaue at p2ptr = %p\n",p2ptr);
    printf("value at ptr accesed via p2ptr = %f\n",**p2ptr);
    printf("Size of ptr = %lu bytes\n",sizeof(ptr)); // 8 bytes
    printf("size of p2ptr = %lu bytes\n",sizeof(ptr)); // 8 bytes
    // we can also have a triple pointer 
    float*** triptr  = &p2ptr;
    printf("memory address of p2ptr using triple pointer is %p\n",triptr);

    return 0;
}
