#include <stdio.h>

// ������ �ڷ����� �ٸ� �ڷ������� ��ȯ�� �� ������ ���� �����ϴ� ���� ����ũ�μ���Ʈ ���� ��� Ȯ��.
// GCC���� ������ �ڷ����� �ٸ� �ڷ������� ��ȯ�� �� ������ ���� �����Ϸ���, �����͸� �ٸ� �ڷ����� �����Ϳ� �Ҵ��� �� �����ڸ� ���. 
int main(void)
{
	int numArr[5] = {11, 22, 33 ,44 ,55};
	void *ptr = &numArr[2];
	
	printf("%d\n", *(int *)ptr); //33
	
	printf("%d\n", *((int *)ptr + 1)); //44
	printf("%d\n", *((int *)ptr - 1)); //22
	
	printf("%d\n", *(++(int *)ptr)); //44
	printf("%d\n", *(--(int *)ptr)); //33
	
	printf("%d\n", *(((int *)ptr)++)); //33
	printf("%d\n", *(((int *)ptr)--)); //44
	
	return 0;
}
