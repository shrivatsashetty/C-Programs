#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a no b/w 1 to 30 \n");
    scanf("%d",&num);
    if(num>=1 && num <=10){
            printf("the no is between 1 to 10");
            }
    else if(num>10&&num<=20){
            printf("the no is in b/w 11 to 20 \n");
            }
    else if(num>20&&num<=30)
            {printf("the no is b/w 20 to 30 \n");
    }
    else
        printf("the no is out of context");


 return 0;
}
