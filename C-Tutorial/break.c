#include<stdio.h>
int main(){
int number;
for (int i=1;i<=10;++i){
printf("enter a number \n");
scanf("%d",&number);
printf("you entered %d \n",number);
if(number<0){break;}// if test condition satisfied then break statement terminates the loop

}
printf("the loop terminated ");
return 0;
}
