#include<stdio.h>

void fn(int nums[5]){
    for(int i=1;i<=5;i++){
        printf("%d\n",nums[i-1]);
    }
}
int main(){
    int nums[5]={1,2,3,4,5};
    fn(nums);
    return 0;
}