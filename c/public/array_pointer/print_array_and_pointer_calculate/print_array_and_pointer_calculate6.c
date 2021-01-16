#include <stdio.h>

int main(void)
{
  int i, j;
  int a[2][3] = {{1,2,3}, {4,5,6}};
  int (*p)[3] = a;

  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("a[%d][%d] : %d\n", i, j, a[i][j]);
      printf("p[%d][%d] : %d\n", i, j, p[i][j]);
    }
  }

  return 0;
}
