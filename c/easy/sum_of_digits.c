#include <stdio.h>

/**
 * Sum of digits
 * Example:
 *  10567 => 16
 *  1+0+5+6+7 => 16
 *
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number
 * Date: 31-01-2024
 * @author Lutfi
 */
int main()
{
    int a = 10564;
    int sum = 0;

    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }

    printf("%d", sum); // 16
    return 0;
}