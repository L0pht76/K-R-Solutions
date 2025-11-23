/*Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column*/
#include <stdio.h>
#define MAX 300

int getLine(char[]);

int main(){
    int len;
    char str[MAX];
    while((len=getLine(str))>0){
        printf("%s", str);
    }
    return 0;
}

int getLine(char str[]){
    int c, idx;
    for(idx=0;idx<MAX && (c=getchar())!=EOF && c!='\n'; idx++){
        if((idx+1)%10==0){
            if(c==' '){
                str[idx++]='\n';
                c=0;
            }
            else{
                int i, in=1, found=0;
                for(i=idx; i!=0 && in ; i--){
                    if(str[i]==' '){
                        str[i]='\n';
                        in=0;
                        found=1;
                    }
                }
                if(!found) str[idx++]='\n';
            }
        }
        if(c!=0) str[idx]=c;
    }
    if(c=='\n') str[idx++]='\n';
    str[idx]='\0';
    return idx;
}
