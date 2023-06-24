// Division of two numbers
#include<stdio.h>
int main()
{
   // we use the data type float because a/b will give us a real number, division is closed under real numbers
    float a,b;
    printf("Enter a\n");
    scanf("%f",&a);     // %f is used since we are dealing with real no's
    printf("Enter b\n");
    scanf("%f",&b);
    printf("Quotient of %f and %f is %f \n",a,b,a/b);
    // Program to find area of a square
    int side;
    printf("The side of the square is\n");
    scanf("%d",&side); // variable side becomes address of the scanned input, that because of '&' function
    printf("The area of the square with side %d is %d sq units\n",side,side*side);

    return 0;

}
