//Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. 
#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[]);

int main(){
    int len;
    char line[MAXLINE];
    while((len=getLine(line))>0){
        printf("%s", line);
    }
    return 0;
}

int getLine(char line[]){
    int c, idx=0;

    while((c=getchar())!=EOF && c!='\n' && idx<MAXLINE){
        if(c!=' ' && c!='\t'){
            line[idx]=c;
            idx++;
        }
    }

    if(c=='\n') line[idx++]='\n';
    line[idx]='\0';

    return idx;
}