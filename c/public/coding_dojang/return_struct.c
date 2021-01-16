#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	int age;
	char address[100];
};

struct person getPerson()
{
	struct person p;
	
	strcpy(p.name, "sean");
	p.age = 30;
	strcpy(p.address, "Seoul gangnam");
	
	return p;
}

int main()
{
	struct person p1;
	
	p1 = getPerson();
	
	printf("name : %s\n", p1.name);
	printf("age : %d\n", p1.age);
	printf("address : %s\n", p1.address);
	
	return 0;
}
