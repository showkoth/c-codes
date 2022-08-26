#include<stdio.h>

long decimalToBinary(int decimal){
    long binary = 0;
    int i = 1;
    while(decimal != 0){
        int r = decimal % 2;
        decimal = decimal / 2;
        binary += r * i;
        i *= 10;
    }
    return binary;
}

int main(){
    int n;
    printf("Please enter a decimal number \n");
    scanf("%d", &n);
    printf("The binary number is %ld \n", decimalToBinary(n));
    return 0;
}