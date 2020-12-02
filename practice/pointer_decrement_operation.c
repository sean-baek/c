#include <stdio.h>

int main(void)
{
    int i=10;
    printf("int i = 10\n");
    printf("value of i : %d\n\n", i);
    
    int *p;
    p = &i;
    printf("int *p = &i\n");
    printf("address of &i : %p\n", &i);
    printf("address of i : %p\n", i);
    printf("address of &p : %p\n", &p);
    printf("address of p : %p\n", p);
    printf("value of i : %d\n", i);
    printf("value of *p : %d\n\n", *p);
    
	
	(*p)--;
	printf("(*P)--\n");
    printf("value of *p : %d\n", *p);
    printf("value of i : %d\n", i);
    printf("address of p : %p\n", &p);
    printf("address of i : %p\n", &i);
    
    return 0;
}
