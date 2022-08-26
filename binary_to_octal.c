#include<stdio.h>

int binaryToDecimal(long binary){
    int decimal = 0, pos = 1;
    while(binary > 0){
        int r = binary % 10;
        decimal += r * pos;
        binary = binary / 10;
        pos = pos * 2;        
    }
    return decimal;
}
int decimalToOctal(int decimal){
    int octal = 0, i = 1;
    while(decimal > 0){
        int r = decimal % 8;
        decimal = decimal / 8;
        octal += r * i;
        i = i * 10;
    }
    return octal;
}
int main(){
    long binary;
    printf("Please input a binary number: \n");
    scanf("%ld", &binary);
    int decimal = binaryToDecimal(binary);
    int octal = decimalToOctal(decimal);
    printf("The octal number is %d \n", octal);
    return 0;
}