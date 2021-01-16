#include <stdio.h>

int main(void)
{
  #ifdef __linux__
    printf("linux");
  #else
    printf("not linux");
  #endif

    return 0;
}
