#include<stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int* p = a;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *p;
        p++;
    }
    printf("the sum is %d \n", sum);
    return 0;
}