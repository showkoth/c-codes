#include<stdio.h>

int main(){
    int rows;
    printf("Please enter the number of rows: \n");
    scanf("%d", &rows);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++) printf(" ");
        for(int k = 0; k < rows -i; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}