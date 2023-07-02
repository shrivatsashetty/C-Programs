// Program to add,subtract and multiply numbers, its kinda binary operation
#include<stdio.h>
int main()
{
  /*Addition,Subtraction,Multiplication are all closed under integers so we'll use data type int */
 int a,b,c; // Declaration of three variables together by using comma

 // addition
 printf("a =\n");
 scanf("%d",&a);
 printf("b =\n");
 scanf("%d",&b);
 printf("c =\n");
 scanf("%d",&c);
 int sum=a+b+c;  // you no need to necessarily assign a fourth variable we'll see that below in subtraction
 printf("The sum of %d , %d and %d is %d\n",a,b,c,sum);
 // subtraction
  printf("a =\n");
 scanf("%d",&a);
 printf("b=\n");
 scanf("%d",&b);
 printf("The difference of of %d and %d is %d\n",a,b,a-b);
 // multiplication
 printf("a =\n");
 scanf("%d",&a);
 printf("b=\n");
 scanf("%d",&b);
 printf("The product of of %d and %d is %d",a,b,a*b);
 /* for division I've made a separate program coz division is not closed under integers the codes differ a little
     we will have to use float data type which is for real numbers since division is closed under real no's */
return 0;
}
