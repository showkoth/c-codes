#include<stdio.h>

int octalToDecimal(int octal){
    int decimal = 0, pos = 1;
    while(octal > 0){
        int r = octal % 10;
        decimal += r * pos;
        octal = octal / 10;
        pos = pos * 8;    
    }
    return decimal;
}

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
    int octal;
    printf("Please enter an octal number: \n");
    scanf("%d", &octal);
    int decimal = octalToDecimal(octal);
    long binary = decimalToBinary(decimal);
    printf("The binary number is %ld \n", binary);
    return 0;
}