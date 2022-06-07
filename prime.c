#include<stdio.h>

int isPrime(int n){
    int m = n / 2;
    for(int i = 2; i <= m; i ++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int result = isPrime(n);
    if(result) printf("%d is a prime number", n);
    else printf("%d is not a prime number", n);
    return 0;
}