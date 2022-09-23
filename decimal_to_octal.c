#include<stdio.h>

long decimalToOctal(int decimal){
    long octal = 0;
    int i = 1;
    while(decimal != 0){
        int r = decimal % 8;
        decimal = decimal / 8;
        octal += r * i;
        i *= 10;
    }
    return octal;
}

int main(){
    int n;
    printf("Please enter a decimal number \n");
    scanf("%d", &n);
    printf("The binary number is %ld \n", decimalToOctal(n));
    return 0;
}