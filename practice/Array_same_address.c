#include <stdio.h>

int main(void)
{
	int a[6] = {0, 1, 2, 3, 4, 5};
	
	printf("%p\n", a);
	printf("%p\n", &a[0]);

	return 0;
}
