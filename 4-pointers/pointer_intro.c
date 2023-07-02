#include<stdio.h>

int main(){

    int myage = 23; // an int type variable
    int* myptr; // declaring a pointer that can store memory address of an int type variable
    myptr = &myage;
    printf("&myage : %p\n",&myage);
    printf("&myptr : %p\n",&myptr); // 0x7ffc1704d564 or some hexadecimal value
    int value_at = *myptr;
    printf("value_at = *myptr\n");
    printf("value_at : %d\n",value_at); // 23
    printf("*myptr : %d\n",*myptr); // 23
    printf("*(&myage) : %d\n",*(&myage)); // 23

    int mynum = 2;
    int *ptr = &mynum;
    // scanf("%d",&mynum);
    printf("%d\n",*&mynum); // 2 printed
    printf("%d\n",*ptr);  // 2 printed

}