#include<stdio.h>
#include<math.h>
int main()
{

printf("%d \n\n",3.20==3.2);  // == checks for equality and prints 1 if true and 0 if false
printf("%d \n\n",3.4==3.45); // here 0 is returned since 3.45 != 3.4 and no space allowed b/w = & =
printf("%d \n\n",3.4!=3.3);  // not equal to function != does exactly opposite of == function
printf("%d \n\n",7!=7);     // here 7=7 so false(0) is returned
printf("%d \n\n",7>=4);    // >= is greater than equal to function and <= is less than or equal to function
printf("%d \n\n",4>=7);
printf("%d \n\n" ,3.99<=4.0);
printf("%d \n\n", 9.998<=9.997); // returns 0,since 9.998 is actually greater than 9.997
int x=8==9;  // here 8==9 is actually a value with 8 & 9 as operators and == as operands
printf("The value of x is %d",x);


 return 0;
}
