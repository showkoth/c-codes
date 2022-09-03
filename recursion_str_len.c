#include<stdio.h>

int findLength(char* str){
    if(*str == '\0') return 0;
    else return 1 + findLength(str + 1);
}
int main(){
    char s[100];
    printf("Please enter the string : ");
    gets(s);
    printf("The length of the string is %d \n", findLength(s));
    return 0;
}