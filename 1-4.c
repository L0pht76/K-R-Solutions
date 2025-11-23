//Write a program to print the corresponding Celsius to Fahrenheit table. 
#include <stdio.h>
int main(){
    float celsius=0, fahr;
    printf("Celsius Fahrenheit\n");
    while(celsius<=300){
        fahr=(celsius*9/5)+32;
        printf("%.1f\t%.2f\n", celsius, fahr);
        celsius=celsius+20;
    }
    return 0;
}