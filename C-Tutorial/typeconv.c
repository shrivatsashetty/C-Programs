#include<stdio.h>
#include<math.h>
int main()
{
    // implicit conversions
double x;
x=5;
printf("%lf \n",x); // int got converted to double

double a=2.34,b=4.56;
int sum=a+b; // decimal part of a and b will vanish in sum
printf("sum is %d \n",sum);

// explicit conversions
int m=75,n=6; // m and n are integers and value of int/int is also an int(coz decimal parts will be omitted by C)
double result=(double)m/n; // we forcefully convert an int result to double type result
printf("result is %lf",result);
 return 0;
}

