#include<stdio.h>

int main(){
    double n;
    printf("Please enter the number: \n");
    scanf("%lf", &n);
    double sum = 0;
    for(double i = 1; i <= n; i++){
        sum = sum + (1/i);
        if(i == 1){
            printf("1 + ");
        }
        else if(i == n){
            printf("1 / %lf", n);
        }
        else{
            printf("1 / %lf + ", i);
        }
    }
    printf("\nThe sum is %lf \n", sum);
    return 0;
}