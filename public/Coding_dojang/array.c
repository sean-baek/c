#include <stdio.h>

int main(void)
{
    int i;
    char s1[10];

    for(i=0; i<10; i++)
    {
        s1[i] = 97 + i;
    }

    for(i=0; i<10; i++)
    {
        printf("%c ", s1[i]);
    }

    return 0;
}
