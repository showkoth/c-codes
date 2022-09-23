#include<stdio.h>

int octalToDecimal(long octal){
    int decimal = 0, pos = 1;
    while(octal > 0){
        int r = octal % 10;
        decimal += r * pos;
        octal = octal / 10;
        pos = pos * 8;        
    }
    return decimal;
}
int main(){
    long octal;
    printf("Please input a octal number: \n");
    scanf("%ld", &octal);
    printf("The decimal value is %d \n", octalToDecimal(octal));
    return 0;
}