#include <stdio.h>

/**
 * Example input
 * 10 4
 * 4.0 2.0
 *
 * Expected output
 * 14 6
 * 6.0 2.0
 *
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/sum-numbers-c
 * @author Lutfi
 */
int main()
{

    int a, b;
    float c, d;

    a = 10, b = 4;
    c = 4.0, d = 2.0;

    printf("%d %d\n", a + b, a - b);
    printf("%0.1f %0.1f", c + d, c - d);

    return 0;
}