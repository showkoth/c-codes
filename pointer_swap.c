#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Please enter the numbers a and b : \n");
    scanf("%d %d", &a, &b);
    printf("The value of a and b : %d , %d \n", a, b);
    swap(&a, &b);
    printf("The value of a and b after swap : %d, %d\n", a, b);
    return 0;
}