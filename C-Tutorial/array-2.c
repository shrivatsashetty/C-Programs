#include<stdio.h>
int main(){
    int len;
    printf("Enter no of elements you want in the array:");
    scanf("%d",&len);
    float values[len];
    for(int i=1;i<=len;i++){
        printf("Enter element no %d:",i);
        scanf("%f",&values[i-1]);
        printf("\n");
    }
    printf("Your array of floating point numbers is \n");
    for(int n=0;n<len;n++){
        printf("%f, ",values[n]);
    }
    printf("\n");
    return 0;
}