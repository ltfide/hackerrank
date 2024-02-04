#include <stdio.h>
#include <stdlib.h>

#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) 
{
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) 
{
    return b.height < MAX_HEIGHT;
}

/**
 * Too high boxes
 * Diflty : Easy
 * URL    : https://www.hackerrank.com/challenges/too-high-boxes
 * Author : Lutfi
*/
int main()
{
    int n = 3;
    int length = 1, width = 2, height = 40;

    box *boxes = malloc(n * sizeof(box));
    boxes[0].length = length;
    boxes[0].width = width;
    boxes[0].height = height;

    for (int i = 0; i < n; i++) {
        if (is_lower_than_max_height(boxes[i])) {
            printf("%d\n", get_volume(boxes[i]));
        }
    }

    return 0;
}