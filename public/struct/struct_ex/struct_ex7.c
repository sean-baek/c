#include <stdio.h>

struct data
{
  char a;
  int b;
};

int main(void)
{
  int i;
    struct data data_list[] = {{'A', 1}, {'B',2}};

  struct data *pdata = data_list;

  printf("%lu\n", (unsigned long)sizeof(struct data));
  printf("%lu\n", (unsigned long)sizeof(data_list));

  for(i=0; i<sizeof(data_list)/sizeof(struct data); i++)
  {
    printf("pdata[%d].a : %c, pdata[%d].b : %d\n", i, pdata[i].a, i, pdata[i].b);
    printf("(pdata + %d)->a : %c, (pdata + %d)->b : %d\n", i, (pdata+i)->a, i, (pdata+i)->b);
    printf("(*(pdata + %d)).a : %c, (*(pdata + %d)).b : %d\n", i, (*(pdata+i)).a, i, (*(pdata+i)).b);
    //printf("(pdata + %d).a : %c, (pdata + %d).b : %d\n", i, (pdata+i).a, i, (pdata+i).b);
  }

  return 0;
}
