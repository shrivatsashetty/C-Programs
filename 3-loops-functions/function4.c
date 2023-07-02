#include<stdio.h>
int x,y;
int sum(int a,int b){
    return a+b;
}
int main(){
    printf("Enter two numbers\n");
    scanf("%d \n %d",&x,&y);
    printf("%d + %d is %d \n",x,y,sum(x,y));
}