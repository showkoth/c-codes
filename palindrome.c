#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int temp = n, sum = 0;
    while(n > 0){
        int r = n % 10;
        sum = sum * 10 + r;
        n = n/10;
    }
    if(temp == sum ) printf("The number is %d is palindrom", temp);
    else printf("The number is %d is not palindrom", temp);
    return 0;
}