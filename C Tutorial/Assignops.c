
#include<stdio.h>
#include<math.h>
int main()
{
int a=5;
printf("++5 is %d\n",++a); // pre increment increases and also prints
printf("6++ is %d\n",a++); // post increment increases but does not print the changed value
printf("final a is %d\n",a);   // final value of a
int x=4,y=7;
x+=y; //x+y is performed and x value is updated
printf("new x is %d \n",x);
++y;  //y value incrimented
printf("new y is %d \n",y);
x-=1; // x = x-1
printf("new x is %d \n",x); x=
y*=0.5; // y = y*0.5
printf("new y is %d \n",y);



 return 0;
}
