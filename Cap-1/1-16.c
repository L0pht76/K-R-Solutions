//Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text. 
#include <stdio.h>
#define MAXLINE 20

int getLine(char[]);
void copy(char[], char[]);

int main(){
    int len, max=0;
    char line[MAXLINE], longest[MAXLINE];
    while((len=getLine(line))>0){
        if(len>max){
            max=len;
            copy(longest, line);
        }
        printf("lenght: %d\n", len);
    }
    return 0;
}
int getLine(char line[]){
    int c, i=0, lenght=0;
    while((c=getchar())!=EOF && c!='\n'){
        if(i<MAXLINE-1){ //MAXLINE-1 because I have to save the next space for nullbyte
           line[i++]=c;
        }
        lenght++;
    }
    if(c=='\n'){
        if(i<MAXLINE-1) line[i++]=c; //write break-line just if there is space for the nullbyte
        lenght++;
    }
    line[i]='\0';
    for(int b=0;b<i;b++) putchar(line[b]);
    return lenght;
}
void copy(char to[], char from[]){
    int i=0;
    while((to[i]=from[i])!='\0') ++i;
}