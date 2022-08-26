#include<stdio.h>

int main(){
    char str[100];
    int count = 0;
    printf("please enter the string : \n");
    scanf("%s", str);
    // int size = strlen(str);
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("The size of the string is : %d \n", count);
    return 0;
}