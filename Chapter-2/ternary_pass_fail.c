// Ternary operator;
#include <stdio.h>

int main() {
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    char status = (marks >= 35) ? 'P' : 'F';
    printf("The status of result is:%c",status);

    return 0;
}