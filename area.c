#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Please enter the side of the triangle \n");
    scanf("%d", &a);
    double area = sqrt(3)/4 * a * a;
    printf("The area is %0.2lf \n", area);
    return 0;
}