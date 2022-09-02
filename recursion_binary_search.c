#include<stdio.h>

int binarySearch(int a[], int left, int right, int target){
    if(left > right) return -1;
    int mid = left + (right - left) / 2;
    if(target == a[mid]) return mid;
    else if(target > a[mid]) return binarySearch(a, mid + 1, right, target);
    else return binarySearch(a, left, mid - 1, target);
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sz = sizeof(a) / sizeof(a[0]);
    int target;
    printf("Please input a target number : \n");
    scanf("%d", &target);
    printf("%d found at index %d", target, binarySearch(a, 0, sz - 1, target));
    return 0;
}