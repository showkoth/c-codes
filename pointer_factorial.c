#include<stdio.h>

int fact(int* ptr){
    int fact = 1;
    for(int i = *ptr; i >= 1; i--){
        fact *= *ptr;
    }
    return fact;
}
int main(){
    int n; 
    printf("Please enter the value of n \n");
    scanf("%d", &n);
    printf("The factorial is %d \n", fact(&n));
    return 0;
}