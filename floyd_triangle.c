#include<stdio.h>

int main(){
    int rows;
    printf("Please enter the number of rows: \n");
    scanf("%d", &rows);
    int val = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", ++val);
        }
        printf("\n");
    }
    return 0;
}