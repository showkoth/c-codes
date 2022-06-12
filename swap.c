#include<stdio.h>

int main(){
    int a, b; 
    printf("Please enter two numbers \n");
    scanf("%d %d", &a, &b);
    printf("value of a and b are %d , %d \n", a, b);    
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("value of a and b are %d , %d \n", a, b);
    return 0;
}