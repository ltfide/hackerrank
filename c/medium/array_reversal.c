#include <stdio.h>
#include <stdlib.h>

/**
 * Array Reversal
 * Dflty  : Easy
 * URL    : https://www.hackerrank.com/challenges/reverse-array-c
 * Date   : 09-02-2024
 * Author : Lutfi
*/
int main()
{
    int n = 6, sum = 0;
    int ns[6] = {16,13,7,2,1,12};

    int *nums = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        nums[i] = ns[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }

    free(nums);
    return 0;
}