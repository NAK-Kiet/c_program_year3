#include<stdio.h>

int main(){

    int integer1 = 0;
    int integer2 = 0;

    int sum = 0;
    // First Integer
    printf("Enter the First Integer:");
    scanf("%d",&integer1);
    // Second Integer
    printf("Enter the Second Integer:");
    scanf("%d",&integer2);
    
    sum = integer1 + integer2;
    
    printf("The sum of two integers is: %d\n",sum);
}