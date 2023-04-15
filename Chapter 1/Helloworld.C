#include<stdio.h>    // header file or preprocessor directive
int main()           // main program starts from here
{
      int age=21;     // value 21 is assigned to variable age
      int one_year=1;
    printf("My name is Shrivatsa A Shetty\n"); // \n creates a new line
    printf("Right now my age is %d\n",age);   // %d indicates a value to be printed which is specified outside the double quotes
        age=age+one_year;                              // value of variable age is updated now
    /*
    Once you declare the value of any variable,it gets stored in memory,
     you no need to re-declare it by specifying the data type to update it
    */
    printf("In one month im going to be %d\n",age);
    char name ='A';                    // a character cannot contain multiple symbols
    printf("hello Mr %c",name);
    return 'Z';
    /* if we give return 'a' output will return 97 return 'z' will give 122
       whereas return 'A' will give 65 and return 'Z' will return 90
       thats because all alphabets in C are associated with a number according to the ASCII convention */
}

