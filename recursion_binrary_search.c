#include<stdio.h>

int binarySearch(int a[], int low, int high, int target){
    if(low > high) return -1;
    int mid = low + (high - low) / 2;
    if(a[mid] == target) return mid;
    else if(target > a[mid]) return binarySearch(a, mid + 1, high, target);
    else return binarySearch(a, low, high - 1, target);
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;
    int size = sizeof(a) / sizeof(a[0]);
    printf("Please enter the target : \n");
    scanf("%d", &target);
    printf("%d found at index %d ", target, binarySearch(a, 0, size, target));
    return 0;
}