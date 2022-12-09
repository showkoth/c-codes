#include<stdio.h>

long int CalcuOfPower(int x,int y)
{
    long int result=1;
    if(y == 0) return result;
    result=x*(CalcuOfPower(x,y-1));  //calling the  function CalcuOfPower itself recursively
}

int main(){

    return 0;
}