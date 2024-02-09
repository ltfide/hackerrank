#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

int min(int count, ...) 
{
    va_list args;
    va_start(args, count);

    int min = va_arg(args, int);
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        if (min > num) {
            min = num;
        }
    }

    va_end(args);
    return min;
}

int max(int count, ...) 
{
    va_list args;
    va_start(args, count);

    int max = va_arg(args, int);
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        if (max < num) {
            max = num;
        }
    }

    va_end(args);
    return max;
}

/**
 * Variadic Functions
 * Dflty  : Medium
 * URL    : https://www.hackerrank.com/challenges/variadic-functions-in-c
 * Date   : 09-02-2024
 * Author : Lutfi
*/
int main() 
{
    int rsum = sum(5, 1,2,3,4,5);
    printf("%d\n", rsum);

    int rmin = min(5, 2,4,11,4,5);
    printf("%d\n", rmin);

    int rmax = max(5, 2,4,11,4,5);
    printf("%d", rmax);

    return 0;
}
