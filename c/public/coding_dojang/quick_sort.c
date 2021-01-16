#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2)
        return -1;
    
    if(num1 > num2)
        return 1;

    return 0;
}

int main(void)
{
    int i=0, size=0;
    int numArr[10] = {8,4,2,5,3,7,10,1,6,9};

    size = sizeof(numArr) / sizeof(int);
    qsort(numArr, size, sizeof(int), compare);

    for(; i<10; i++)
    {
        printf("%d ", numArr[i]);
    }
    
    printf("\n");

    return 0;
}
