#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int rev = 0; 
    while(n > 0 ){
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("the reversed number is : %d \n", rev);
    return 0;
}