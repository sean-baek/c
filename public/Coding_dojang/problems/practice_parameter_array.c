#include <stdio.h>

void setElements(float arr[], int count)
{
    int i=0;
    for(; i<count; i++)
    {
        arr[i] = 1.2f;
    }
}

int main(void)
{
    float numArr[5];

    setElements(numArr, sizeof(numArr) / sizeof(float));

    int i=0;
    for(; i<sizeof(numArr) / sizeof(float); i++)
        printf("%f", numArr[i]);
    printf("\n");

    return 0;
}
