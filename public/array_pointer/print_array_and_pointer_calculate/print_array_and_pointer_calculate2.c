#include <stdio.h>

int main(void)
{
  int i;
  int a[] = {1, 2, 3, 4};
  int *p = a;

  for(i=0; i<=3; i++)
  {
    printf("a + i : %p\n", a+i);
    printf("p + i : %p\n", p);
    p++;
  }

  return 0;
}
