#include<stdio.h>

int fact(int n){
    if( n == 0) return 1;
    else return n * fact(n -1);
}

int main(){
    int n, r;
    printf("Please enter the n and r \n");
    scanf("%d %d",&n, &r);
    if(r > n){
        printf("Invalid input!\n");
        return 0;
    }
    int result = fact(n) / fact(n-r);
    printf("the nPr is: %d", result);

    return 0;
}