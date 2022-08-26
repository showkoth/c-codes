#include<stdio.h>

int main(){
    int a, b, sum;
    FILE* fp = fopen("sum.txt", "w");
    scanf("%d %d", &a, &b);
    sum = a + b;
    fprintf(fp, "The sum of %d and %d is : %d \n", a, b, sum);
    fclose(fp);
    return 0;
}