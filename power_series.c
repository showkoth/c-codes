#include<stdio.h>
#include<math.h>

double fact(double n){
    if(n == 0) return 1;
    else return n * fact(n -1);
}
int main(){
    double n = 100, x;
    printf("please enter x\n");
    scanf("%lf",&x);
    double sum = 1;
    for(double i = 1; i <= n; i ++){
        sum = sum + pow(x, i)/fact(i);
    }
    printf("sum is %lf", sum);
    return 0;
}