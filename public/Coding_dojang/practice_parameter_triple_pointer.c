#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void ***Pmatrix, int m, int n, int size)
{
	*Pmatrix = malloc(sizeof(void *) * m);
	
	int i;
	
	for(i = 0; i < m; i++)
	{
		(*Pmatrix)[i] = malloc(size * n);
	}
}

void freeMatrix(void ***Pmatrix, int m)
{
	int i;
	for(i = 0; i < m; i++)
	{
		free((*Pmatrix)[i]);
	}
	
	free(*Pmatrix);
}

int main()
{
	short **matrix;
	
	allocMatrix(&matrix, 3, 3, sizeof(short));
	
	matrix[0][2] = 10;
	matrix[1][1] = 20;
	printf("%d %d\n", matrix[0][2], matrix[1][1]);
	
	freeMatrix(&matrix, 3);
	
	return 0; 
}

