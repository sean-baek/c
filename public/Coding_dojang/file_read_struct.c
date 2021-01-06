#include <stdio.h>

#pragma pack(push, 1)
struct Data
{
    char c1;
    short num1;
    int num2;
    char s1;
};
#pragma pack(pop)

int main(void)
{
    struct Data d1;

    FILE *fp = fopen("data2.bin", "rb");

    fread(&d1, sizeof(d1), 1, fp);

    printf("%s %d %d %c\n", d1.s1, d1.num1, d1.num2, d1.c1);

    fclose(fp);

    return 0;
}
