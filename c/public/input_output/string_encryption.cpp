#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void encrypt(char cipher[], int shift);

int main(void)
{
	char cipher[50];
	int shift = 3;
	
	printf("%Type the string : ");
	gets(cipher);
	encrypt(cipher, shift);
	
	system("pause");
}

void encrypt(char cipher[], int shift)
{
	int i = 0;
	
	while (cipher[i] != '\0')
	{
		if(cipher[i] >= 'A' && cipher[i] <= 'z')
		{
			cipher[i] += shift;
			if(cipher[i] > 'z')
				cipher[i] -= 26;
		}
		
		i++;
	}
	
	printf("Encrypted string : %s", cipher);
}
