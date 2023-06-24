#include<stdio.h>
int main(){
    int n=1,i;
    while (n<=5){
        for(i=1;i<=10;i++){
            printf("inner loop %d\n",i);
            if (i==4){printf("value of n is %d\n",n);break;}
        }
    printf("outer loop %d\n",n);
    n++;
    }
return 0;    
}
