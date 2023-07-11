#include<stdio.h>
#include<math.h>
int main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
if(num<5)
{
for(num<5; num!=5; ++num) // C will escape the loop only when test condtn is true
{printf("the no is now %d \n",num);}
}
else printf("the nois greater than 5");

 return 0;
}
