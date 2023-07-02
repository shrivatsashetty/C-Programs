#include<stdio.h>
#include<math.h>

float area_sq(float side);
float area_circle(float radius);
float area_rect(float s1, float s2);

int main(){
    char ch;
    printf(" Enter \n 'r' for rect \n 'c' for circle \n 's' for square\n");
    scanf("%c",&ch);
    float area ;
    
    switch(ch){
        case 'r':
            float s1,s2;
            printf("Enter side1 and side2 below respectively\n");
            scanf("%f\n%f",&s1,&s2);
            area=area_rect(s1,s2);
            printf("\nArea of rectangle is:%f\n",area);
            break;

        case 'c':
            float radius;
            printf("Enter radius of the circle: ");
            scanf("%f",&radius);
            area=area_circle(radius);
            printf("\nArea of the given circle is:%f\n",area);
            break;

        case 's':
            float side;
            printf("Enter side of the square: ");
            scanf("%f",&side);
            area=area_sq(side);
            printf("\nArea of the square is:%f\n",area);
            break;  

    }
    return 0;
}
// Area of square
float area_sq(float side){
    //printf("Area of the square is %f\n",side*side)
    return side*side;
}
//Area of circle
float area_circle(float radius){
    return 3.14*radius*radius;
}
//Area of rectangle
float area_rect(float s1, float s2){
    //printf("Area of the rectangle is %f \n",s1*s2);
    return s1*s2;

}