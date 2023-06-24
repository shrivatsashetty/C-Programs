#include<stdio.h>
int main(){
int num1,num2,num3;
printf("Enter three numbers:\n");
scanf("%d\n%d\n%d",&num1,&num2,&num3);
if (num1>=num2&&num1>=num3){
printf("%d is the greatest",num1);
}
else if(num2>=num1&&num2>=num3){
printf("%d is the greatest",num2);
}
else{
printf("%d is greatest \n",num3);
}
return 0;
}