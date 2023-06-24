
#include<stdio.h>
#include<math.h>
int main()
{
int i,num,sum=0;
printf("Enter a number \n");
scanf("%d",&num);

for(i=1;i<=num;++i){
sum+=i;
}


printf("sum of first %d naturals no's is %d\n",num,sum);
 return 0;
}
