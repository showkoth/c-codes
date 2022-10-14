#include<stdio.h>

int main(){
    int n;
    printf("Please enter the value of N: ");
    scanf("%d", &n);
    // print upper half
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <=i; j++) printf("%d",j);
        for(j = i - 1; j >= 1; j--) printf("%d",j);
        printf("\n");
    }
    //print the lower half
    for(int i = n -1; i >= 1; i--){
        int j;
        for(j = 1; j <= i; j++) printf("%d", j);
        for(j = i - 1; j >= 1; j--) printf("%d",j);
        printf("\n");
    }
}