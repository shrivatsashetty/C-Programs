// A program to draw an equilateral triangle as a pattern of numbers

#include <stdio.h>

int main() {
    int side;
    printf("Draw a beautiful patter of numbers forming an equilateral triangle\n\n");
    printf("Enter side of the equilateral triangle: ");
    scanf("%d",&side);
    for(int i=1,j=side; i<=side; i++,j--){
        
        for(int k=j;k>0;k--){
            printf(" %d",k);
            }
        printf("\n");
        }
        return 0;
    }
    
   