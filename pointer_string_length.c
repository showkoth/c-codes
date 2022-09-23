#include<stdio.h>

int strLen(char* str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}
int main(){
    char s[] = {'a', 'b', 'c', '\0'};
    printf("The length is %d \n", strLen(s));
    return 0;
}