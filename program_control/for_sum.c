#include<stdio.h>

// sum the even number from 2 to 50
int main(){
    int sum = 0;  // initialize sum

    for (int number =2; number<=50; number+=2){
        sum +=number;
    }
    printf("Total Sum is = %d", sum);
}