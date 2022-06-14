#include<stdio.h>

int main(){
    char ch[100], i;
    int length = 0;
    printf("Please enter the string : \n");
    scanf("%s", ch);
    for(i = 0; ch[i] != '\0'; i++){
        length ++;
    }
    printf("length of the string is %d", length);
}