#include <stdio.h>
#include <conio.h>

int munja(int sum)
{
	int j;
	for(j=0; j<200; j++)
	{
		sum += j;
	}
	return sum;
}

int main(void)
{
	int i, sum=0;
	
	
	for(i=0; i<200; i++);
	{
		printf("%d", munja(sum));
	}
	
	getch();
	
	for(;;);
}
