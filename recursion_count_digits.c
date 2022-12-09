#include<stdio.h>

int noOfDigits(int n){
    static int cnt = 0;
    if(n != 0){
        cnt++;
        noOfDigits(n/10);
    }
    return cnt;
}

int main(){
    return 0;
}