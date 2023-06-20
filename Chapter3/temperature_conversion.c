#include<stdio.h>

float deg2far(float temp);
float far2deg(float temp);

int main(){
    float temp,result;
    int choice;
    printf("1.Degree to Frenheit\n2.Farenheit to Degree\n\nMake a Choice: ");
    scanf("%d",&choice);
    switch(choice){

        case 1:
            printf("Enter temperature in degree celsius: ");
            scanf("%f",&temp);
            result = deg2far(temp);
            printf("The corresponding temperature in degree farenheit is %f\n",result);
            break;
        
        case 2:
            printf("Enter temperature in degree farenheit: ");
            scanf("%f",&temp);
            result = far2deg(temp);
            printf("The corresponding temperature in degree celsius is %f\n",result);
            break;

        default:
            printf("Invalid Choice\nchoice must be  '1' or '2'\n");

    }




    return 0;
}

float deg2far(float temp){
    return temp*(9.0/5.0) + 32;} // 9/5 will truncate to only quotient without decimal
                                 // 9/5 = 1 whereas 9.0/5.0 = 1.8 in C
float far2deg(float temp){
    return (temp-32)*(5.0/9.0);
}