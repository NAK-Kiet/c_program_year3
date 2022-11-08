#include<stdio.h>

int main(){

    int number = 1; // assign 1 to number

    // post increment
    printf("%d\n", number); // print 1
    printf("%d\n", number++); // print 1 then postincrement
    printf("%d\n", number); // print 2

    printf("\n\n");
    // pre increment
    number = 1;
    printf("%d\n" , number); // print 1
    printf("%d\n", ++number); // preincrement then print 2
    printf("%d\n", number); // print 2 
}