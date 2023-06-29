#include <stdio.h>

int cube_by_value(int n);
int cube_by_reference(int* m); // this function takes a pointer as argument

int main(){
    int number;
    int* ptr = &number;

    printf("======= Call by value demo =======\n\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Initially number = %d\n",number);
    cube_by_value(number);
    printf("The orignal value of number = %d\n",number);

    printf("======= Call by reference demo =======\n\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Initially number = %d\n",number);
    cube_by_reference(ptr); // we can also pass &number as the argument
    printf("The orignal value of number = %d\n",number);

    return 0;   
}

int cube_by_value(int n){
    n = n*n*n;
    printf("cube of the number = %d\n",n);
    return n;
}
// call by refernce will change the orignal value of the variable itself 
int cube_by_reference(int* m){
    *m = *m * *m * *m; // this directly manipulates the value at the memory address itself
    printf("cube of the number = %d\n",*m);
    return *m;
}