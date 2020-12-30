#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

struct Person *allocPerson()
{
	struct Person *p = malloc(sizeof(struct Person));
	
	strcpy(p->name, "ȫ�浿");
	p -> age = 30;
	strcpy(p->address, "Seoul gangnam");
	
	return p; 
}

int main()
{
	struct Person *p1;
	
	p1 = allocPerson();
	
	printf("name : %s\n", p1 -> name);
	printf("age : %d\n", p1 -> age);
	printf("address : %s\n", p1 -> address);
	
	free(p1);
	
	return 0;
}
