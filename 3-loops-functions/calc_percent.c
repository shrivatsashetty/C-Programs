#include<stdio.h>

float calcscore(float mark1, float mark2, float mark3);


int main(){
    float mark1,mark2,mark3;
    printf("Enter mark1: ");
    scanf("%f",&mark1);
    printf("Enter mark2: ");
    scanf("%f",&mark2);
    printf("Enter mark3: ");
    scanf("%f",&mark3);

    float result = calcscore(mark1,mark2,mark3);
    printf("Aggregate percentage is %f\n",result);

    return 0;

}

float calcscore(float mark1, float mark2, float mark3){

    float total = mark1 + mark2 + mark3;
    float percent = total*(100.0/300.0);
    return percent;

}