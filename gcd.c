#include<stdio.h>

int gcd(int a, int b){
   if(a > b){
       int temp = a;
       a = b;
       b = temp;
   }
   for(int i = b; i >= 1; i--){
       if(a % i == 0 && b % i == 0){
           return i;
       }
   }
   return 1;
}

int main(){
    int x, y = -1;
    printf("Please enter numbers: To exit enter number less than or equal 0\n");
    while(1){
        scanf("%d", &x);
        if(x <= 0) break;
        else if(y == -1){
            y = x;
        }
        else{
            y = gcd(x, y);
        }
    }
    printf("gcd of all numners entered is %d \n", y);
    return 0;
}