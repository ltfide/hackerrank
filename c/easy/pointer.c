#include <stdio.h>

void update(int *a, int *b)
{
    int temp_a = *a;
    *a = temp_a + *b;
    *b = temp_a - *b;

    if (*b < 0)
    {
        *b = -*b;
    }

    printf("%d\n", *a);
    printf("%d\n", *b);
}

/**
 * Pointer in c
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/pointer-in-c
 * Date: 31-01-2024
 * @author Lutfi
 */
int main()
{
    int x = 4, y = 5;
    int *a = &x, *b = &y;
    update(a, b);

    return 0;
}