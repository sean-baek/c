#include <stdio.h>
#include <string.h>

int main(void)
{
    int count;
    char buffer[5] = {0,};

    FILE *src = fopen("hello.txt", "r");
    FILE *dst = fopen("hello2.txt", "w");

    while(feof(src) == 0)
    {
        count = fread(buffer, 1, 4, src);
        printf("%s",buffer);
        fwrite(buffer, 1, count, dst);
        memset(buffer, 0, 5);
    }

    fclose(dst);
    fclose(src);

    return 0;
}
