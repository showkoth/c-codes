#include<stdio.h>

int fibo(int n){
    if(n <= 1) return n;
    else return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("nth fibonacci number is %d", fibo(n));
}