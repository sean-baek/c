#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	//system("mode con cols=80 lines=25"); //cols = 칸/행 (가로)  lines = 줄/열 (세로)
    system("title 모든 수 합해주는 PG");
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 3);
    
	int a,s, sum = 0, sum_1 = 0;
	
	for(a=0; a<=200; a++)
		{
			for(s=0; s<=a; s++)
			{
				sum_1 = s+1;
			}
			
			//printf("%d,%d = %c\n", a,s,sum_1);
			printf("%d = %c\n",a,sum_1); 
			//sum += a;
		}
	
	//printf("%d",sum);
	
	for(;;);
}

/*
void munja(void)
{
	int j, sum=0;
	
	for(j=0; j<=200; j++)
	{
		sum = sum + j;
	}
	printf("%d",sum);
	
	return munja();
}

int main(void)
{
	int i,l;
	
	
	
	for(l=1; l<=200; l++)
	{
		for(i=0; i<=200; i++);
		{
			printf("\n%c",14);
		}
	}
	
	
	getch();

	for(;;);
}
*/
/*
void stc(void)
{
	int s,a,sum = 0, sum_1 = 0;
	
	for(s=1; s<=200; s++)
	{
		for(a=0; a<=200; a++)
			sum += 1;
		
		sum_1 += a;
	}
	
}

int main(void)
{
	int i,j, sum=0;
	
	for(i=1; i<200; i++)
	{
		for(j=0; j<10; j++);
			{
			printf("\n%c",stc);
			}		
	}
	
	getch();
}
*/
