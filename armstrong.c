#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int temp =n, sum = 0;
    while(n > 0){
        int r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if(temp == sum) printf("The numbner %d is an armstrong number", temp);
    else printf("The number %d is not an armstrong number", temp);
    return 0;
}