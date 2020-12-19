#include <stdio.h>
#define MAX(x,y) (x>y)?(x):(y)
#define DOUBLE(x) x*2

int main(void)
{
  printf("MAX(5,4) : %d\n", MAX(5,4));
  printf("DOUBLE(4) : %d\n", DOUBLE(4));
  printf("DDOUBLE(4+3) : %d\n", DOUBLE(4+3));

  return 0;
}
