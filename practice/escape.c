#include <stdio.h>
 
int main(void)
{
	int id, pass;
	
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���: \n");
	printf("id:____\b\b\b\b"); // _(����) 4���Է� 
	scanf("%d", &id);
	printf("pass:____\b\b\b\b"); // _(����) 4�� �Է� 
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
	
	
	return 0;
}

/*
Output :

���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:

id:1115

pass:1115

�Էµ� ���̵�� "1115"�̰� �н������ "1115"�Դϴ�.

*/
