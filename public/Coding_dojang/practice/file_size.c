#include <stdio.h>

int main(void)
{
    int size;

    FILE *fp = fopen("hello.txt", "r");

    fseek(fp, 0, SEEK_END);
    size=ftell(fp);

    printf("%d\n", size);

    fclose(fp);
}
