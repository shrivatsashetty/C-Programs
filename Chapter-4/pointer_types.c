#include<stdio.h>

int main(){
    float mynumber = 21.022001;
    float *mypointer ; // we can also declare pointer as 'float* mypointer'
    mypointer = &mynumber; 
    printf("'mynumber' is the variable\n'mypointer' is the pointer pointing to the address of mynumber\n");

    printf("adress of myvariable stored inside mypointer is %p\n",mypointer);
    printf("value stored inside myvariable accessed via '*mypointer' is %f\n",*mypointer);
    printf("memory address of pointer 'mypointer' itself is %p\n",&mypointer);

    printf("%p\n", (void*)0x7ffe240df000);


    return 0;
}