// make user input numbers untill he/she enters a positive number
#include<stdio.h>
int main(){
float num;
printf("Enter a no : \n");
scanf("%f",&num);
while(num<=0){
printf("I need a positive no : \n");
scanf("%f",&num);
}
printf("the number you entered is positive %f ",num);
}
