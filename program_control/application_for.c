#include<stdio.h>
#include<math.h>
int main(){

    float p = 1000;
    float r = 0.05;
    float a = 0;
  
    printf("Year\t\tamount of deposit\n");
    for (int year = 1; year <= 10; year++){
        
         a = p*pow(1+r,year);
        printf("%d\t\t%f\n",year, a);
    }
}