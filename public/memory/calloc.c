#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int *ptr = (int *)calloc(sizeof(int), 10);

  free(ptr);

  return 0;
}
