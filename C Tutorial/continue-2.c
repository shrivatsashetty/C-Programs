#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==5){continue;;} // 5 will be skipped
        printf("%d \n",i);
    }
}