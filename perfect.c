#include<stdio.h>

int main(){
    int n; 
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int sum = 0, temp = n;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        printf("%d is a perfect number\n", n);
    }
    else{
        printf("%d is not a perfect number \n", n);
    }
    return 0;
}