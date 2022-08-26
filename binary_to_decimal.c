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
int main(){
    long binary;
    printf("Please input a binary number: \n");
    scanf("%ld", &binary);
    printf("The decimal value is %d \n", binaryToDecimal(binary));
    return 0;
}