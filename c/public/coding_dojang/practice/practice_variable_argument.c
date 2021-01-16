#include <stdio.h>
#include <stdarg.h>

void printStrings(int args, ...)
{
    va_list ap;
    int i=0;

    va_start(ap, args);
    for(; i<args; i++)
    {
        char *str = va_arg(ap, char*);
        printf("%s ", str);
    }
    va_end(ap);

    printf("\n");
}

int main(void)
{
    printStrings(2, "c", "Language");
    printStrings(3, "The", "Little", "prince");

    return 0;
}
