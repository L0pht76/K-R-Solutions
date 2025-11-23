//Write a program to count blanks, tabs, and newlines. 
#include <stdio.h>
int main(){
    int c, nline=0, blank=0, tab=0;
    while((c=getchar())!=EOF){
        if(c=='\n') 
            ++nline;
        else if(c==' ')
            ++blank;
        else if (c=='\t') ++tab;
    }
    printf("Lines: %d\nBlanks: %d\nTabs: %d\n", nline, blank, tab);
    return 0;
}