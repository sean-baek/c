#include <stdio.h>

#define MIN(x, y) (((x) > (y)) ? (x):(y))

#define MAX(x, y) (((x) > (y)) ? (x):(y))

int main(void)
{
    printf("%d\n", MIN(10, 20));
    printf("%d\n", MAX(4 & 4, 2 & 2));

    return 0;
}
