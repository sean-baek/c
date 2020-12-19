#include <stdio.h>

int main(void)
{
	int i = 15;
	int *p = &i;
	printf("%p\n",&i);
	printf("%p\n",&p);

	return 0;
}
