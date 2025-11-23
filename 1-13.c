// Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging

/*
1 - *
2 - **
3 - 
4 - **** ocrrencias
*/

#include <stdio.h>
#define MAXLINE 1000

int getLine();
void histogram(int);

char str[MAXLINE];

int main(){

    return 0;
}

int getLine(){
    extern char str[];
    int c,i; //['a','b','c','\n','\0']
    for(i=0;i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n';str[i++]=c);
    if(c=='\n' && i<MAXLINE-1) str[i++]=c;
    str[i]='\0';
    return i;
}

void histogram(int len){
    extern char str[];
    int compare[len], i, temp=0, words=0, idx;
    for(i=0;i<MAXLINE;compare[i++]=0);
    for(i=0;i<len;i++){
        if(str[i]==' '){
            compare[idx]++;
            words++;
            temp=i;
            if(words%2==0) idx=i-temp;
            else idx=i-(temp+words)
        }// "abcd(4) efghijkl(8)(13) xkakw(5)(19) x(21)(22)"
    }
}

x x+1 x+2

19-13-2=4