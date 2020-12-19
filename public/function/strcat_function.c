#include <stdio.h>
#include <string.h>

int main(void)
{
  char buf[100] = "hello";

  strcat(buf, " World!");

  printf("%s\n", buf);

  return 0;
}
