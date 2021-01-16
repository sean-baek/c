#include <stdio.h>

int main(void)
{
  int i;
  char *p[] = {"hello", "hi", "world"};

  printf("p : %lu\n", (unsigned long)sizeof(p));
  printf("char* size : %lu\n", (unsigned long)sizeof(char*));
  for(i=0; i<sizeof(p)/sizeof(char*); i++)
    printf("p[%d] %p : %s\n", i, p[i], p[i]);

  return 0;
}
