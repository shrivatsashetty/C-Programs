/*this program takes different positive numbers from the user
keeps adding them and as soon as the user enters a negative integer
the program terminates and displays the sum*/
#include<stdio.h>
int main()
{
int num,sum=0;
do{printf("Enter a number: ");
scanf("%d",&num);
sum+=num;
} while (num>=0);
sum-=num;
printf("the sum of all positive numbers entered by you is %d",sum);


return 0;
}
