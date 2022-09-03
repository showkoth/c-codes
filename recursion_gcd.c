#include<stdio.h>

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}
int main(){
    int a, b;
    printf("Please enter the numbers: \n");
    scanf("%d %d", &a, &b);
    int result = a < b ? gcd(a, b) : gcd(b, a);
    printf("gcd of %d and %d is %d \n", a, b, result);
    return 0;
}