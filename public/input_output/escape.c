#include <stdio.h>
 
int main(void)
{
	int id, pass;
	
	printf("아이디와 패스워드를 4개의 숫자로 입력하세요: \n");
	printf("id:____\b\b\b\b"); // _(밑줄) 4개입력 
	scanf("%d", &id);
	printf("pass:____\b\b\b\b"); // _(밑줄) 4개 입력 
	scanf("%d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
	
	
	return 0;
}

/*
Output :

아이디와 패스워드를 4개의 숫자로 입력하세요:

id:1115

pass:1115

입력된 아이디는 "1115"이고 패스워드는 "1115"입니다.

*/
