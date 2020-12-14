#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

int main(void)
{
	int i, r;
	int h[2] = {0, 0};
	
	srand( time(NULL) );  
	
	for( i=0; i<1000; i++)
	{ 
		r = rand();
		r = r % 2 ; 
		h[r] = h[r] + 1; 
	}

	for(i=0; i<2; i++)
	{ 
		printf("[%d] = %d\n", i+1, h[i]);
	}
}
