#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int a,b;
	
	printf("ī���ʹٿ��� ������ ���ڸ� �Է��Ͻÿ� : ");
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
