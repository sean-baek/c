#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numPtr = malloc(sizeof(int) * 10);

    (char*)*numPtr[0] = "hello";
    numPtr[9] = 20;

    printf("%s\n", (char*)*numPtr[0]);
    printf("%d\n", numPtr[9]);

    free(numPtr);

    return 0;
}
