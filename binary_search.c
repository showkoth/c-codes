#include <stdio.h>
int binarySearch(int array[], int x, int sz)
{
    int low = 0, high = sz - 1;
    while(low <= high){
        // int mid = low + (high - low) / 2;
        int mid = (low + high) / 2;
        printf("%d \n", array[mid]);
        if(array[mid] == x) return mid;
        else if(array[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30}; // sorted array
    int target = 9;
    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d \n", sz);
    int result = binarySearch(a, target, sz);
    printf("Target %d is found at position %d \n", target, result);
    return 0;
}