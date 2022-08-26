#include<stdio.h>

int main(){
    int a;
    FILE* fp = fopen("input.txt", "r");
    if(fp == NULL){
        printf("Error\n");
        return 0;
    }
    fscanf(fp, "%d", &a);
    printf("The value in the file is : %d \n", a);
    fclose(fp);
    return 0;
}