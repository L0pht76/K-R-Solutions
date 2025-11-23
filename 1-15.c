//Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>

double fahrToCel(double);

int main(){
    for(double fahr=0;fahr<=100;fahr+=20){
        printf("%6.2fF = %6.2fC\n", fahr, fahrToCel(fahr));
    }
    return 0;
}
double fahrToCel(double fahr){
    return (fahr-32)*5/9;
}