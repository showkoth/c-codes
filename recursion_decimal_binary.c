#include<stdio.h>

int decimalToBinary(int decimal){
    if(decimal == 0) return 0;
    else{
        int remainder = decimal % 2;
        return remainder + 10 * decimalToBinary(decimal / 2);
    }
}

int main(){
    int decimal;
    printf("Please enter a decimal number: \n");
    scanf("%d", &decimal);
    printf("The binary number is %d \n", decimalToBinary(decimal));
    return 0;
}