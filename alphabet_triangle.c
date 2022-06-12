#include<stdio.h>

void print(int n){
    int ch = 65;
    int i, j, k, m;
    for(int i = 1; i <= n; i++){
        for(j = n; j >= i; j--){
            printf(" ");
        }
        for(k = 1; k <= i; k++){
            printf("%c", ch++);
        }
        ch--;
        for(int l = 1; l < i; l++){
            printf("%c", --ch);
        }
        printf("\n");
        ch = 65;
    }
}
int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    print(n);
    return 0;
}