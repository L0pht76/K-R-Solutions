//Write a program to print all input lines that are longer than 80 characters. 

#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int);

int main(){
    char line[MAXLINE];
    int len;
    while((len=getLine(line, MAXLINE))>0){
        if(len>10) printf("%s", line);
    }
    return 0;
}

int getLine(char line[], int max){
    int c, idx;
    for(idx=0; idx < max && (c=getchar())!=EOF && c!='\n'; line[idx++]=c); 
    if(c=='\n') line[idx++]='\n';  
    line[idx]='\0';
    return idx;
}