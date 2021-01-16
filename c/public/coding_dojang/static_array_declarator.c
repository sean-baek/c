#include <stdio.h>

void printArray(int arr[static 5], int count)
{
    int i;
    for(i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int numArr1[] = {1, 2, 3, 4, 5};
    printArray(numArr1, sizeof(numArr1) / sizeof(int));

    int numArr2[] = {1, 2, 3};
    printArray(numArr2, sizeof(numArr2) / sizeof(int));

    return 0;
}
