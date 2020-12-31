#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int a,b;
	
	printf("카운터다운을 시작할 숫자를 입력하시오 : ");
	scanf("%d",&b);
	while(b>0)
	{
		sleep(1);
		printf("%d\n",b);
		b=b+1;
		
	} 
	system("pause");
	 return 0;
	 
}
