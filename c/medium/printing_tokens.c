#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SPACE ' '

/**
 * Printing Tokens
 * Dflty  : Medium
 * URL    : https://www.hackerrank.com/challenges/printing-tokens-
 * Date   : 09-02-2024
 * Author : Lutfi
*/
int main()
{
    char *s = malloc(1024 * sizeof(char));
    strcpy(s, "This is C");
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == SPACE) {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}       