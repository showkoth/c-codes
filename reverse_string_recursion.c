#include <stdio.h>
#include <string.h>

void reverse(char *input, int begin, int end) {
  char temp;

  if (begin >= end)
    return;

  temp = *(input + begin);
  *(input + begin) = *(input + end);
  *(input + end) = temp;

  reverse(input, ++begin, --end);
}

int main() {
  char input[100];
  printf("Enter the string: ");
  gets(input);
  reverse(input, 0, strlen(input) - 1);
  printf("Reversed string -> %s", input);
  return 0;
}