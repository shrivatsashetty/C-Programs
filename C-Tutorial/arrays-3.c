#include<stdio.h>
int main(){
    int i;
    printf("Enter which element to acess:");
    scanf("%d",&i);
    int points[]={23,12,34,12,45,56,12,34};  // size of array auto determined by C
    printf("%d th element is %d \n",i,points[i-1]);
    // if out of index input given , C returns some garbage value
    printf("Enter which element to replace:");
    scanf("%d",&i);
    printf("Enter replacement:");
    scanf("%d",&points[i-1]);
    printf("%dth element is %d \n",i,points[i-1]);
}