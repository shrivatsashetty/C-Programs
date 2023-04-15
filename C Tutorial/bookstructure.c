#include<stdio.h>
#include<string.h>
struct book{
    char book_name[60];
    int book_id;
    float book_price;
}b1,b2,b3;

int main(){
    scanf("%s \n %s",&b1.book_name,&b2.book_name);
    printf("Book for sale:%s  price:%f",b1.book_name,b1.book_price);
    printf("Book for sale:%s",b2.book_name);
}