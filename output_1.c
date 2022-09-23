#include<stdio.h>

int main(){
    int i = 5;
    printf("%d%d%d%d%d", i++, i--, ++i, --i, i);
    // char *p = "hi friends", *p1;
    // p1 = p;
    // while(*p != '\0') ++*p++;
    // printf("%s", p1);
    #define a 50
    printf("\n%d",a);
    char *str1 = "abcd";
    char str2[] = "abcd";
    printf("\n%d %d %d", sizeof(str1), sizeof(str2), sizeof("abcd"));
}