//Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. 
#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(){
    double fahr, celsius;
    printf("Fahrenheit\tCelsius\n");
    for(fahr=UPPER;fahr>=LOWER;fahr-=STEP){
        printf("%.1f\t\t%.2f\n", fahr, (fahr-32)*5/9);
    }
    return 0;
}