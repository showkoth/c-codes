#include<stdio.h>

int main(){
    int a[] = {3, 1, 66, -44, 33, 27, 52, 103, 44, 34, 21};
    int sum = 0;
    int* ptr = a;
    int sz = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < sz; i++){
        sum += *ptr;
        ptr++;
    }
    printf("the sum is %d \n", sum);
    return 0;
}