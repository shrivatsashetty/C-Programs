#include<stdio.h>

int main(){
    // pointer to store address of floating-pt number
    float mynumber = 21.022001;
    float* mypointer ; // we can also declare pointer as 'float *mypointer'
    mypointer = &mynumber; 
    printf("'mynumber' is the variable\n'mypointer' is the pointer pointing to the address of mynumber\n");

    printf("adress of myvariable stored inside mypointer is %p\n",mypointer);
    printf("value stored inside myvariable accessed via '*mypointer' is %f\n",*mypointer);
    printf("memory address of pointer 'mypointer' itself is %p\n",&mypointer);

    printf("%p\n", (void*)0x7ffe240df000);

    char mychar = 's';
    char* charptr = &mychar;
    printf("adress of mychar is %p\n",&charptr);
    printf("value of mycahr is %c\n",*charptr);
    printf("ASCII value of '%c' is %d\n",mychar,*charptr);
   
    /*type-casting pointer address to unsigned int
      is not recommended, but is better for human readability
      will throw warnings
      */
    printf("adress of mychar in unsigned int is %u\n",&mychar); // warning generated for this line
    printf("the memory address of pointer to mychar is %u\n",&charptr); // warning generated for this line

    return 0;
}