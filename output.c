#include<stdio.h>

// int main()
// {
//     int a=10, b=25;
//     a=b++ + a++;
//     b=++b + ++a;
//     printf("%d%d \n",a,b); // 3663
//     return 0;
// }

int main()
{
    int a=2, b=5,c;
    c=a+++b;
    printf("%d, %d, %d",a,b,c); //3, 5, 7
    return 0;
}