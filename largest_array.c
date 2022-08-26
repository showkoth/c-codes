#include<stdio.h>

int largestElement(int a[], int sz){
    int max = a[0];
    for(int i = 1; i < sz; i++){
        if(max < a[i]) max = a[i];
    }
    return max;
}

int main(){
    int a[] = {3, 1, 66, -44, 33, 27, 52, 103, 44, 34, 21};
    int sz = sizeof(a)/sizeof(a[0]);
    int max = largestElement(a, sz);
    printf("The max element is %d \n", max);
    return 0;
}