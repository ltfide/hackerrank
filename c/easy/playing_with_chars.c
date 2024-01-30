#include <stdio.h>

/**
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/playing-with-characters
 * @author Lutfi
*/
int main()
{
    char c;
    char s[100];
    char sen[100];

    printf("Enter a char: ");
    scanf("%c", &c);
    printf("Char: %c\n", c);

    printf("Enter a string: ");
    scanf("%s", &s);
    printf("String: %s\n", s);

    printf("Enter a sentece: ");
    scanf("%[^\n]%*c", &sen);
    printf("Sentence: %s", sen);

    return 0;
}

/**
 * Expected output
 * 
    C
    Language
    Welcome To C!!
*/