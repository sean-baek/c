#include <stdio.h>

// 변수의 자료형을 다른 자료형으로 변환한 뒤 변수의 값을 변경하는 것은 마이크로소프트 전용 언어 확장.
// GCC에서 변수의 자료형을 다른 자료형으로 변환한 뒤 변수의 값을 변경하려면, 포인터를 다른 자료형의 포인터에 할다한 뒤 연산자를 사용. 
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
