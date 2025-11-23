//Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. 
#include <stdio.h>
int main(){
    int c, lastOneABlank=0;
    while((c=getchar())!=EOF){
        if(c==' '){
            if(!lastOneABlank){
                putchar(c);
                lastOneABlank=1;   
            }
        }else{
            putchar(c);
            lastOneABlank=0;
        }
    }
    return 0;
}
