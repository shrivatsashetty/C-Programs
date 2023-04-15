#include <stdio.h>

int main() {
   int day;
   printf("Enter a day number from 1-7: ");
   scanf("%d",&day);
   switch(day){
       case 1:printf("Mon\n");
       case 2:printf("Tue\n");
       case 3 :printf("Wed\n");
       case 4 :printf("Thur\n");
       case 5 :printf("Fri\n");break; // If input is 5,only Fri prints
       case 6 :printf("Sat\n");
       case 7 :printf("Sun\n");
       default : printf("All day\n");
   }

    return 0;
}