#include <stdio.h>

void printNumber(int count)
{
    if(count > 3)
        return ;       

    printf("%d\n", count);

    printNumber(++count);
}

int main(void)
{
    int count = 1;
    
    printNumber(count);
    
    return 0;
}
