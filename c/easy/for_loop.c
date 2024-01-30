#include <stdio.h>

/**
 * For loop in c
 * Difficulty: Easy
 * URL: https://www.hackerrank.com/challenges/for-loop-in-c
 * Date: 30-01-2024
 * @author Lutfi
 */
int main()
{
    int a = 8;
    int b = 11;

    char numbers[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            printf("%s\n", numbers[i - 1]);
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("%s\n", "even");
            }
            else
            {
                printf("%s\n", "odd");
            }
        }
    }

    return 0;
}