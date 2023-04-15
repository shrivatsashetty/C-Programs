#include<stdio.h>
int main()
{
int n,sum=0;
for(int i=1;i<=5;++i){
printf("Enter a non -ve number: ");
scanf("%d",&n);
if(n<0){continue;} // after 'continue' terminator (;) is mandatory
sum+=n;
}
printf("the sum of all positive numbers entered by you is %d",sum);
return 0;
}

