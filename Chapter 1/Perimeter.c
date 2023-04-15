#include<stdio.h>
int main()
{
    float a,b,c;
    // perimeter of rectangle
printf("the adjacaent side of the reactagle measures respectively\n");
scanf("%f %f",&a,&b); // this is a short way of scanning multiple values at one go
printf("The perimeter of the rectangle is  %f \n",2*(a+b));

//perimeter of a triangle
printf("The three sides of the triangle are respectively \n");
scanf("%f %f %f",&a,&b,&c);
printf("The perimeter of the triangle is %f",a+b+c);
return 0;
}
