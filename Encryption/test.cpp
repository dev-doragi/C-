#include "Header.h"
#define SIZE 30

int main()
{
	int length = 0, randInt, seed;
	char buffer[SIZE] = { 0, };
	printf("��ȣȭ�� ���ڿ��� �Է��ϼ���..  ");
	fgets(buffer, SIZE, stdin);
	printf("seed�� �Է��ϼ���.. ");
	scanf("%d", &seed);
	randInt = getRandeomNumber(seed);
	length = strlen(buffer);
	char* textptr = (char*)malloc(sizeof(char) * (length + 1));
	strcpy(textptr, buffer);


	printf("\n���� ������: %s\n", textptr);

	randInt = getRandeomNumber(seed);
	for (int i = 0; i < length; i++)
	{
		textptr[i] += randInt;
	}
	
	printf("��ȣȭ �� ������: %s\n", textptr);

	for (int i = 0; i < length; i++)
	{
		textptr[i] -= randInt;
	}

	printf("��ȣȭ �� ������: %s\n", textptr);

	free(textptr);
	return 0;
}