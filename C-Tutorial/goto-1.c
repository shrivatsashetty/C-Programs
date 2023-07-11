#include<stdio.h>
int main(){
    int sum=0,entry,n,i;
    float avg;
    printf("Enter how many entries:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d.enter a number:",i);
        scanf("%d",&entry);
        if(entry<0){
            goto label1;
        }
        sum=sum+entry;
        
    }
    printf("sum is %d \n",sum);
    printf("no of entries is %d \n",n);
    
    printf("average of above %d entries is %f \n",n,(float)sum/n);//typecasting the avg
label1:
    printf("the number entered is negative\n");

    return 0;
}