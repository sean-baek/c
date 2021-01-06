#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readData(char *buffer, int offset, int size, FILE *fp)
{
    int count;

    if(feof(fp) == 1)
        return 0;
    
    fseek(fp,offset,SEEK_SET );
    count = fread(buffer, 1, size, fp);

    return count;
}

int main(void)
{
    char buffer[10] = {0,};
    int count;

    FILE *fp = fopen("hello.txt", "r");

    count = readData(buffer, 9, 3, fp);

    printf("%s, count : %d\n", buffer, count);

    fclose(fp);

    return 0;
}
