#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[5] = {0, };
    int count = 0, total = 0;

    FILE *fp = fopen("hello.txt", "r");

    while(feof(fp) == 0)
    {
        count = fread(buffer, sizeof(char), 4, fp);
        printf("%s", buffer);
        memset(buffer, 0, 5);
        total += count;
    }
    printf("\ntotal : %d\n", total);

    fclose(fp);

    return 0;
}
