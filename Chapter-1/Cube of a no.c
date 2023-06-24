#include<stdio.h>

int main()
{
    float n,m;
    // squre of a no
    printf("Enter your number below\n");
    scanf("%f",&n);
    printf("The square of %f is %f\n",n,n*n);
    // cube of a no
    printf("Enter your number below\n");
    scanf("%f",&n);  // here the value of n gets changed and it's allowed since its a variable
    printf("The cube of %f is %f \n\n",n,n*n*n);  // \n\n forces the cursor two lines below
    printf("Now the final value of n is %f \n",n);
return 0;
}
