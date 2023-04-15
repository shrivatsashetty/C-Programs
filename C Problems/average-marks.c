// program to calculate avg marks
#include<stdio.h>
int main(){
    int num;
    printf("Enter no of students in the class: ");
    scanf("%d",&num);
    float marks[num],sum=0,avg;
    printf("Keep entering marks of %d students:\n",num);
    for(int i=1;i<=num;i++){
        scanf("%f",&marks[i-1]);
        sum+=marks[i-1];
    }
    avg=(sum/num);
    printf("The class average is %f \n",avg);
}