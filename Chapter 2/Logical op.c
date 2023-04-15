// In this program we will see logical operators i.e AND,OR,NOT
#include<stdio.h>
#include<math.h>
int main()

{
    int x=6==7,y=5==5;
    printf("x = %d & y = %d \n",x,y);
    int m=4!=3,n=4<=4;
    printf("m = %d & n = %d\n\n",m,n);
    // now we see logical op b/w these variables
    printf("x AND y is %d \n",x&&y);
    printf("m AND n is %d \n\n",m&&n);
    printf("x OR y is %d \n\n",x||y);
    printf("NOT 0 is %d, NOT 1 is %d \n\n",!x,!y);
    printf("1 AND 0 is %d \n",1&&0);
    printf("2 AND 1 is %d \n",2&&1); // 1,2,3,4.... are all considered as 1 or TRUE
    printf("0 AND 0 is %d \n",0&&0);
    printf("1 OR 0 is %d \n", 2==2||3==3);
    printf("2 OR 3 is %d \n", 2<=2||3<4);
    printf("0 OR 0 is %d \n", 5>6||3>=5);
    printf("NOT of 1 is %d \n",!1);
    printf("NOT of 0 is %d \n", 5!=4);


    return 0;


}
