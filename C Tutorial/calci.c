// Program for calculator using if else ladder
#include <stdio.h>
#include<math.h>
int main() {

  int a,b;
  char op;
printf("Enter the operator you want to perform \n");
printf("then enter the operends respectively \n");
scanf("%c", &op);
scanf("%d %d",&a,&b);
if (op=='+')
  {printf("Sum =%d",a+b);
  }

  else if(op=='-')
  {
      printf("subt=%d",a-b);
  }
  else if(op=='/')
  {
      printf("divide=%d",a/b);
  }
  else if(op=='*')
  {
      printf("mul=%d",a*b);
  }

  else
  {
      printf("Invalid Operator");
  }

    return 0;
}
