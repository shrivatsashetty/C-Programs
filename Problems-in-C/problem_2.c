
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,m,n,x1,x2,denom;
printf("a,b,c,d,m,n are respectively \n");
scanf("%f \n %f \n %f \n %f \n %f \n %f",&a,&b,&c,&d,&m,&n);
denom=(a*d-c*b);
if(denom==0){
printf("solution does not exist");
}
else{
x1=(m*d-b*n)/denom; x2=(n*a-m*c)/denom;
printf(" the solutions are \n x1=%f \n x2=%f",x1,x2);
}
return 0;
}
