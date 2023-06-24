#include<stdio.h>
int main()
{
    float pi=3.14;    // float, is a data type for real numbers
    int num  =-11;    // int, is a data type which denote real number
    char star='*';    // char, is a data type which denote characters
    char hash='#';    // a character is always enclosed in singe quotation
    float exp=2.4;
    double dec=7.543; // double is another data type for real no's which can store more decimal values than float type
    printf("our integer is %d\n",num);            // %d is a format specifier for integers
    printf("star looks like this %c\n",star);   // %c is a format specifier for characters
    printf("value of pi equals %f\n",pi);        // %f is a format specifier for real no's
    printf("hash looks like this %c and is pretty cool\n",hash);
    printf("value of e lies b/w 2 & 3 and is given as %f \n",exp);
    printf("value of decimal no is %lf \n",dec);  // %lf is format specifier for double data type
    double num1=23.567;
    float num2=34.4f;
    printf("num1 is %lf and num2 is %f \n",num1,num2);

    /* Giving input in output console */
    int x; int y;  ;    // here we specified two variables but have not yet assigned them values
    printf("x = ");
    scanf("%d",&x);  // scanf is a function that takes input from user at output console
    printf("y = ");
    scanf("%d",&y);
    printf("x is %d and y is %d\n",x,y);

    return 0;
}
