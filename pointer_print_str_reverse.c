#include<stdio.h>

void printReverse(char* str){
    if(*str == '\0') return;
    printReverse(str + 1);
    printf("%c", *str);
}
int main(){
    char s[] = {'a', 'b', 'c', '\0'};
    printf("The reverse string is: ");
    printReverse(s);
    return 0;
}