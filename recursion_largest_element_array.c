#include<stdio.h>
#include<limits.h>

int maxElement(int a[], int n){
    static int i = 0, MAX = INT_MIN;

    if(i < n){
        if(a[i]> MAX){
            MAX = a[i];
        }
        i++;
        maxElement(a, n);
    }
    return maxElement;

}

int main(){
    return 0;
}