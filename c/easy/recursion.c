#include <stdio.h>

int find_nth_term(int n, int a, int b, int c)
{   
    /**
     * 1  2  6
     * 2  3  11
     * 3  6  20
     * 6  11 37
     * 11 20 68
    */
    printf("%d %d %d\n", a, b, a+b+c);
    if (n == 1) return a;
    return find_nth_term(n - 1, b, c, a+b+c);
}

/**
 * Calculate the Nth term
 * Diflty : Easy
 * URL    : https://www.hackerrank.com/challenges/recursion-in-c
 * Author : Lutfi
*/
int main()
{
    int n = 5, a = 1, b = 2, c = 3;
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans);
    return 0;
}