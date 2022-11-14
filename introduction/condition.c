#include<stdio.h>

int main(){
    int num1 = 20;
    int num2 = 20;

    if (num1 > num2){
        printf("number1 is bigger number2\n");
    }

    if (num1 < num2){
        printf("number1 is smaller than number2\n");
    }

    if (num1 >= num2){
        printf("number1 is bigger and equal to number2\n");
    }
    
    if (num1 <= num2){
        printf("number1 is smaller and equal to number2\n");
    }

    if (num1 == num2){
        printf("number1 is equal to number2\n");
    }
    
    if (num1 != num2){
        printf("number1 is different from number2\n");
    }
}