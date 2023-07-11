#include <stdio.h>

float calculate_gst(float cost_price,float gst);

int main(){
    float cost_price,gst;
    printf("Enter cost price of the product:");
    scanf("%f",&cost_price);
    printf("Enter gst ");
    scanf("%f",&gst);
    calculate_gst(cost_price,gst);
    printf("initial price before adding tax was %f\n",cost_price); // inside the function the main function the value remains unchanged

    return 0;
}

float calculate_gst(float cost_price,float gst){
   cost_price*=(1 + gst/100);
   printf("The final price after adding gst is %f\n",cost_price);
   return cost_price; 
}