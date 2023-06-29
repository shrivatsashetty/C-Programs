/* In this program we will see how to manipulate 
    value of a variable using pointers

*/  

#include <stdio.h>
int main(){
    int x;
    int* xptr;

    xptr = &x;
    *xptr = 2;
    printf("x = %d\n",x); // x = 2
    (*xptr)++; // x = 3
    printf("x = %d\n",x);
    *(&x)+=3;
    printf("x = %d\n",x);
    // garbage value is stored inside uninitialised pointers
    int y;
    y = 21;
    int* yptr;
    printf("yptr = %p\n",yptr);
    
    
    return 0;
}