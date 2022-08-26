#include<stdio.h>

int main(){
    int a, b, sum;
    FILE* fp = fopen("sum.txt", "w");
    if(fp == NULL){
        printf("Error\n");
        return 0;
    }
    scanf("%d %d", &a, &b);
    sum = a + b;
    fprintf(fp, "The sum of %d and %d is : %d \n", a, b, sum);
    fclose(fp);
    return 0;
}