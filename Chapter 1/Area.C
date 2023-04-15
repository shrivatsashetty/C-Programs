#include<stdio.h>
int main()
{
    float pi = 3.14;  // since pi is a real number we use data type float
    float radius;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);  // & indicates that scanned value's address will be stored in variable radius
    printf("The area of the circle with radius %f is %f sq units",radius,pi*radius*radius);
    return 0;
}
