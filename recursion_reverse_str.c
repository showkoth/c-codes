#include<stdio.h>

void reverse(char* str){
    if(*str == '\0') return;
    else reverse(str + 1);
    printf("%c", *str);
}

int main(){
    char str[100];
    printf("Please input the string : ");
    gets(str);
    printf("Reverse string is: ");
    reverse(str);
    return 0;
}