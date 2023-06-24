#include<stdio.h>
#include<string.h>

struct Cricketer {
    char name[50];
    int jersy_no;
    int age;
    int ranking;
    float economy;
    float average;
};

int main(){
    struct Cricketer Virat , Rohith , Dhoni;
    strcpy(Virat.name,"Virat Kohli");
    Virat.age=33;
    printf("The name is %s ,he's %d yrs old\n",Virat.name,Virat.age);
    
    return 0;
}