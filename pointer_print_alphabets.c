#include<stdio.h>
#include<stdlib.h>
int main(){
    char* ch;
    ch = (char*) malloc(sizeof(char));
    *ch = 'A';
    while(*ch <= 'Z'){
        printf("%c ", *ch);
        *ch += 1;
    }
}