#include<stdio.h>

int main(){

    int integer1 = 0;
    int integer2 = 0;
    
    float div = 0;
    // First Integer
    printf("Enter the two Integers:");
    scanf("%d %d",&integer1 , &integer2);


    div = (float)integer1 / integer2;
    
    printf("The divison of two integers is: %.2f\n" , div);
}