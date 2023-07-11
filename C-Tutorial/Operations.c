#include<stdio.h>
#include<math.h>
int main()
{
    int a=13,b=4,integer_answer;
    integer_answer=a/b;
    double m=6.6,n=5.6,decimal_answer;
    decimal_answer=m/n;
    printf("13/4 gives quotient %d and remainder %d\n exact value of 6.6/5.6 is %lf\n",integer_answer,a%b,decimal_answer);
    printf("new value of a is %d and b is %d",a++,b--);
    return 0;
}
