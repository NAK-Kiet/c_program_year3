#include <stdio.h>

int main(){

    int numbers;
    int num1, num2, num3, num4;
    printf("Enter 4 digits number:");
    scanf("%d",&numbers);

    /*
    // number1 
    3581/1000

    // number2
    3581 - 3000 = 581
    581/100 = 5

    // number3
    3581 - 3000 - 500 = 81
    81/10 = 8;

    // number4
    3581 - 3000 - 500 - 80 = 1

    */

    num1 = numbers/1000;
    num2 = (numbers - num1*1000)/100;
    num3 = (numbers - num1*1000 - num2*100)/10;
    num4 = (numbers - num1*1000 - num2*100 - num3*10);
    printf("number1 is: %d\n", num1);
    printf("number2 is: %d\n", num2);
    printf("number3 is: %d\n", num3);
    printf("number4 is: %d\n", num4);

    int sum = num1 + num2 + num3 + num4;

    printf("The sum of the 4 number is: %d\n", sum);

}