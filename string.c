#include <stdio.h>
#include<string.h>
#include<ctype.h>

int characterFrequency(char s[], char ch)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (ch == s[i])
            count++;
    }
    return count;
}
void count(char line[])
{
    int vowels, consonant, digit, space;
    vowels = consonant = digit = space = 0;
    for (int i = 0; line[i] != '\0'; ++i)
    {
        line[i] = tolower(line[i]);
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u') ++vowels;
        else if ((line[i] >= 'a' && line[i] <= 'z')) ++consonant;
        else if (line[i] >= '0' && line[i] <= '9') ++digit;
        else if (line[i] == ' ') ++space;
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
}
int main()
{
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // printf("Enter a character to find its frequency: ");
    // scanf("%c", &ch);
    // printf("Frequency of %c is %d \n", ch, characterFrequency(str, ch));
    count(str);

    return 0;
}