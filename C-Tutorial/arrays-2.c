#include<stdio.h>
int main(){
    int mynums[7]={1,2,3,4,5,6,7};       // Declaring size of array beforehand
    printf("initially first element of array is %d \n",mynums[0]);
    mynums[0]=10;                        // first element of array gets mutated
    printf("now the first element of array is %d \n",mynums[0]);
    for(int i=0;i<=3;i++){              // loop through an array
    printf("%d \n",mynums[i]);
    }
}