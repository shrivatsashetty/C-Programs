// the program below keeps asking and adding numbers untill user enters input 0
#include<stdio.h>
int main()
{
float num1,num2;
printf("enter a number :");
scanf("%f",&num1);
do{
printf("Enter another no :");
scanf("%f",&num2); num1+=num2;
}while (num2!=0.0);
printf("the sum of the numbers is %f",num1);

return 0;
}
