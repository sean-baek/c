#include <stdio.h>

int sum(int n)
{
    if(n == 100)
        return 100;
    return n + sum(n+1);
}

int main(void)
{
    printf("%d\n",sum(1));

    return 0;
}
