#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;
	
	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);
	
	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;	
	
	printf("%d�ʴ� %d�� %d���Դϴ�. \n", input, minute, second);
	
	return 0;
}

/*
Output :

�ʸ� �Է��Ͻÿ�: 1000

1000�ʴ� 16�� 40���Դϴ�.
*/
