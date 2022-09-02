#include<stdio.h>

int sum(int n){
    if(n == 0) return n;
    else return n + sum(n - 1);
}
int main(){
    int n;
    printf("Enter the number n : \n");
    scanf("%d", &n);
    printf("Sum is %d \n", sum(n));
    return 0;
}