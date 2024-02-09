#include <stdio.h>
#include <string.h>

/**
 * 48 = 0
 * 57 = 9
*/
int isDigit(char c) {
    int tmp = c - '0';
    return tmp >= 0 && tmp <= 9;
}

/**
 * Frequency of Digits
 * Dflty  : Medium
 * URL    : https://www.hackerrank.com/challenges/frequency-of-digits-1
 * Date   : 09-02-2024
 * Author : Lutfi
*/
int main()
{
    int freq[10] = {0};
    char ex[] = "a11472o5t6";

    for (int i = 0; i < strlen(ex); i++) {
        if (isDigit(ex[i])) {
            int inx = ex[i] - '0';
            freq[inx] += 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    return 0;
}