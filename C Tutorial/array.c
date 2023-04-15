#include<stdio.h>
int main(){
    int numbers[]={1,2,3,4,5,6};
    char letters[]={'c','h','a','r','l','i','e'};
    printf("%d\n",numbers[0]);
    printf("%c\n",letters[2]);
    numbers[0]=-1;
    printf("the letter array contains word '");
    for(int i=1;i<=7;i++){
        printf("%c",letters[i-1]);
    }
    printf("' \n");

return 0;
}
