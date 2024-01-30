#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

/**
 * Find max num from args
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/functions-in-c
 * Date: 30-01-2024
 * @author Lutfi
 */
int main()
{
    int max = max_of_four(3, 4, 7, 6);
    printf("%d", max);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int r = a;

    if (r < b)
        r = b;
    if (r < c)
        r = c;
    if (r < d)
        r = d;

    return r;
}