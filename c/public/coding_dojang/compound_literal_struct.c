#include <stdio.h>

struct Person
{
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person p)
{
    printf("name : %s\n", p.name);
    printf("age : %d\n", p.age);
    printf("address : %s\n", p.address);
}
int main(void)
{
    printPerson((struct Person) {.name = "sean", .age = 30, .address="seoul gangnam"});
    
    printPerson((struct Person) {"sean", 20, "gangnam"});

    return 0;
}
