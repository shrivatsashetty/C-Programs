#include<stdio.h>

int main(){
    int start,end,sum=0;
    printf("Enter start number:");
    scanf("%d",&start);
    printf("Enter end number:");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        sum+=i;
    }
    printf("The sum from %d to %d is:%d",start,end,sum);
    
    return 0;
}