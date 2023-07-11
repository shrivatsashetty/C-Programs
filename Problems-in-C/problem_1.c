#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d;
 printf("the four no's are respectively \n");
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 scanf("%f",&d);
 int denom=(c-d);
 if(denom==0)
 {
 printf("the quotient is not defined");
 }
 else printf("Quotient is %f",(a+b)/denom);
 return 0;
}

