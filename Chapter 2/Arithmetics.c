#include<stdio.h>
#include<math.h>
int main()
{
    float x=pow(25,0.5);  // pow(x,y) raises base x to power y and it returns a real type value
    printf("value of x is %f \n",x); // inside printf we can't use %d for pow() since it returns a double type value
    float y=pow(7,2);
    printf("y= %f \n",y);
    printf("6 raised to power 2 is %d \n",(int)pow(6,2)); // this is called explicit conversion by specifying the data type inside ()
    int number=31;
    printf("number value is %d \n",number);
    double decimal=number;
    printf("decimal value is value is %.2lf \n",decimal);

    return 0;

}
