#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int (*getAdd(int x, int y))(int, int)
{
    printf("%d %d\n", x, y);
    return add;
}

int main(void)
{
    printf("%d\n", getAdd(8, 9)(10, 20));

    return 0;
}
