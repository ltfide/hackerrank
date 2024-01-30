#include <stdio.h>

int main()
{
    int a = 10564;

    int i = 0;
    int x = 1;
    while (i++ < 6)
    {
        printf("%d\n", (a / x) % 10);
        x = x * 10;
    }
}