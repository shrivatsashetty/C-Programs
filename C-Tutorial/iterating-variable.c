// Observe the behaviour of iterating variable 'i'
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Even no's from 0 to %d are \n",number);
    for( int i=0;i<=number;i+=2){
    printf("%d ",i);
    }
    printf("\n");
    printf("odd no's from 1 to %d are \n",number);
    for(int i=1;i<=number;i+=2){ //'i' must be redeclared
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}