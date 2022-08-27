#include<stdio.h>
#include<stdlib.h>

void print(int a[], int sz){
    for(int i = 0; i < sz; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubbleSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n - i; j++){
            if(a[j] < a[j-1]) swap(a, j, j-1);
        }
    }
}

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int current = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > current){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }
}
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(a[j] < pivot) swap(a, ++i, j);
    }
    swap(a, ++i, high);
    return i;
}
void quickSort(int a[], int low, int high){
    if(low >= high){
        return;
    }
    int p = partition(a, low, high);
    quickSort(a, low, p - 1);
    quickSort(a, p + 1, high);
}
void merge(int a[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int a1[n1], a2[n2];
    for(int i = 0; i < n1; i++){
        a1[i] = a[left + i];
    }
    for(int i = 0; i < n2; i++){
        a2[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(a1[i] <= a2[j]){
            a[k++] = a1[i++];
        }
        else{
            a[k++] = a2[j++];
        }
    }
    while(i < n1){
        a[k++] = a1[i++];
    }
    while(j < n2){
        a[k++] = a2[j++];
    }
}
void mergeSort(int a[], int left, int right){
    if(left >= right){
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}
void selectionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_index]) min_index = j;
        }
        swap(a, i, min_index);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++){
        array[i] = rand() % 100;
    }
    // bubbleSort(array, n);
    // insertionSort(array, n);
    // quickSort(array, 0, n);
    // mergeSort(array, 0, n - 1);
    selectionSort(array, n);
    print(array, n);
    return 0;
}