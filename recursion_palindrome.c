#include<stdio.h>
#include<string.h>

typedef enum{true,false} bool;

bool isPalindrome(char str[], int left, int right){
    if(left >= right) return true;
    if(str[left] == str[right]){
        return isPalindrome(str, left + 1, right - 1);
    }
    return false;
}
int main(){
    char s[100];
    printf("Please input the string: ");
    gets(s);
    if(isPalindrome(s, 0, strlen(s) -1) == true) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}