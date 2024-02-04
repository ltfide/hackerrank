#include <stdio.h>

/**
 * 3 3
 * compare a to b with &, |, ^
 * a = 1, b = 2
 * a = 1, b = 3
 * a = 2, b = 3
 * result = 2 0 2
 *
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/bitwise-operators-in-c
 * Date: 04-02-2024
 * Author: Lutfi
 */
int main()
{
    int n = 3, k = 3;
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int andOpt = i & j;
            int orOpt = i | j;
            int xorOpt = i ^ j;

            if (maxAnd < andOpt && andOpt < k)
            {
                maxAnd = andOpt;
            }

            if (maxOr < orOpt && orOpt < k)
            {
                maxOr = orOpt;
            }

            if (maxXor < xorOpt && xorOpt < k)
            {
                maxXor = xorOpt;
            }
        }
    }

    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d", maxXor);

    return 0;
}