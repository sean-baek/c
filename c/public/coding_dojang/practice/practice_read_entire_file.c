#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
    int size;
    int currPos = ftell(fp);

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    return size;
}

int main(void)
{
    char *buffer;
    int size;

    FILE *fp = fopen("hello.txt", "r");

    size = getFileSize(fp);
    buffer = malloc(size+1);
    memset(buffer, 0, size+1);

    fread(buffer, size, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    free(buffer);

    return 0;
}
