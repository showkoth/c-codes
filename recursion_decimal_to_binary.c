#include<stdio.h>
#include<string.h>

char* findBinary(int decimal, char result[]){
    if(decimal == 0){
        return result;
    }
    int rem = decimal % 2;
    strcpy(result, strcat(rem, result));
    return findBinary(decimal/2, result);
}

int main(){
    int n;
    printf("Please enter a decimal number: \n");
    scanf("%d", &n);
    char result[100];
    printf("%s\n", findBinary(n, result));
    return 0;
}