#include <stdio.h>
#include <stdlib.h>

/**
 * One Dimensional Array
 * Dflty  : Medium
 * URL    : https://www.hackerrank.com/challenges/1d-arrays-in-c
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

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    printf("%d", sum);    
    free(nums);
    return 0;
}