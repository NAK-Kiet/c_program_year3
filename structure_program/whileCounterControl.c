#include<stdio.h>

int main(){
    int total = 0;
    int score = 0;
    int counter = 1;
    float average  = 0;
    while (counter <= 5){
        printf("Enter score:");
        scanf("%d",&score);
        total = score +total;
        counter = counter +1;
    }
    average = (float) total/5;

    printf("Class average score is: %f\n",average);
}