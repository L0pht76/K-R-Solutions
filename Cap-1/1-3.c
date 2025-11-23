//Modify the temperature conversion program to print a heading above the table. 
#include <stdio.h>

int main(){
    float fahr=0, celsius;
    printf("Fahreinheit \t Celsius\n");
    while(fahr<=300)
    {
        celsius=(fahr-32)*5/9;
        printf("%3.1f\t\t%6.2f\n", fahr, celsius);
        fahr=fahr+20;
    }
    //return 0;
}