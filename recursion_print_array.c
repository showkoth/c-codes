#include<stdio.h>

void printArray(int a[], int start, int end){
    if(start >= end){
        return;
    }
    printf("%d ", a[start]);
    printArray(a, start + 1, end);
}

int main(){
    return 0;
}