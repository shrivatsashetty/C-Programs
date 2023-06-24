#include<stdio.h>
int main()
{
    float a,b,result;
    char op;
    printf("Enter operation to be performed: ");
    scanf("%c",&op);
    printf("Enter the two operands \n");
    scanf("%f \n %f",&a,&b);
    switch(op){
        case '+':
            result=a+b;
            printf("result is %f\n",result);
            break;
        case '-':
            result=a-b;
            printf("result is %f\n",result);
            break;
        case '*':
            result=a*b;
            printf("result is %f\n",result);
            break;
        case '/':
            result=a/b;
            printf("result is %f\n",result);
            break;
        default : printf("operation not known");
}
return 0;
}
