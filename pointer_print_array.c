#include<stdio.h>
#include<stdlib.h>

void printArray(int* p, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *p);
        p++;
    }
}
int main(){
    int n;
    printf("Please enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
    printArray(a, n);
    return 0;
}