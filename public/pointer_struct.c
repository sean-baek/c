#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _person
{
    char name[20];
    int age;
    char addr[100];
}person;

int main(void)
{
    person *p1;
    person *p2;
    
    printf("person address : %p\n", &_person);

    strcpy(p1->name, "hello world");
    printf("이름 : %s\n", p1->name);
    printf("address : %p\n", p1->name);

    strcpy(p2->name, "helword");
    printf("이름 : %s\n", p2->name);
    printf("address : %p\n", p2->name);
    return 0;
}

