#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Enter no of aix rows:");
    scanf("%d",&i);
    printf("Enter no of aix columns:");
    scanf("%d",&j);
    int aix[i][j];
    for(n=1;n<=i;n++){
        for(m=1;m<=j;m++){
            printf("a%d%d is \n",n,m);
            scanf("%d",&aix[n-1][m-1]);
            }

    }
    printf("%d\n",aix[1][1]);

}
/* refer this for aij
     0    1    <--index no
 0 [a11  a12]
 1 [a21  a22]
 2 [a31  a32]
 
 ^---index no
*/

