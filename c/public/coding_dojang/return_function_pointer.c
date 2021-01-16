#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int ((*getadd)())(int, int)
{
    return add;
}

int main(void)
{
    printf("%d\n", getadd()(100, 200));

    return 0;
}
