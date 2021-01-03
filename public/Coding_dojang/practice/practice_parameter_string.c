#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 10);
	
	strcpy(s1, "Venus");
	
	comparestring(s1, "Venus");
	
	free(s1);
	
	return 0;
}
