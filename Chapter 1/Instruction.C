#include<stdio.h>
int main()
{
    int a;     // declaration of a variable
    a=99;      // assignment of value, value is always to be assign on right of = sign i.e 99=a is invalid
    int b=a,c;   // we declared variable b,assigned it a value,declared c but did not assign it any value
     c=b+1;      //now c is assigned a value
     printf("value of c is %d \n",c);
     int x,y=4,z;
     x=z=y;
     /* x=y=z will store 0 in x,y,z since z value is not assigned and by default it will be 0
     here since only y is assigned a value so it must be written at last of = sign  */
     printf("x , y ,z are all equal to %d \n",y);

     int p,q,r;  // int p=q=r=7 would be invalid since q , r are not yet assigned
     p=q=r=7;
     printf("p,q,r are respectively equal to %d ,%d% ,%d",p,q,r);


return 0;

}
