//Write a function reverse(s) that reverses the character strings. Use it to write a program that reverses its input a line at a time. 
#include <stdio.h>
#define MAXLINE 1000

void reverse(char str[], int);
int getLine(char str[]);

int main(){
    char line[MAXLINE];
    int len;
    while((len=getLine(line))>0){
        reverse(line, len);
        printf("%s", line);
    }
    return 0;
}

int getLine(char str[]){
    int c, idx;
    for(idx=0 ; idx<MAXLINE-1 && (c=getchar())!=EOF && c!='\n' ; str[idx++]=c);
    if(c=='\n'){
        if(idx<MAXLINE-1) str[idx++]='\n';
    }
    str[idx]='\0';
    return idx-1;//excluding the nullbyte to avoid inverting it
}

void reverse(char str[], int lastIdx){
    int temp, idx;
    if(str[lastIdx]=='\n') lastIdx--; // if it has a new-line character, decrement lastIdx, to avoid inverting it
    
    for(idx=0;idx<lastIdx;idx++, lastIdx--){
        temp=str[idx];
        str[idx]=str[lastIdx];
        str[lastIdx]=temp;
    }
}   