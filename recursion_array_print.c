#include<stdio.h>
#include<stdlib.h>

void printArray(int a[], int i, int size){
    if(i >= size) return;
    printf("%d ", a[i]);
    printArray(a, i + 1, size);
}
int main(){
    int n;
    printf("Please enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
    printArray(a, 0, n);
    return 0;
}