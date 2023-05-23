#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ũ�� �����ϴ� �ϳ����� ž �ǽ�
int cnt = 0;
void movePancake(int pancake, char dishA, char dishB, char dishC);

int main()
{
	int pancake;

	printf("������ũ�� ������ �Է��غ�����..");
	scanf("%d", &pancake);

	printf("������ũ�� �ű�� ����\n");
	movePancake(pancake, 'A', 'B', 'C');
	printf("������ũ�� �Ű��� Ƚ��: %d", cnt);

	return 0;
}

void movePancake(int pancake, char dishA, char dishB, char dishC) {
	if (pancake == 1) {
		printf("������ũ�� %c���ÿ��� %c���÷� �̵��Ͽ����ϴ�.\n", dishA, dishC);
		cnt++;
		return;
	}

	movePancake(pancake - 1, dishA, dishC, dishB);
	printf("������ũ�� %c���ÿ��� %c���÷� �̵��Ͽ����ϴ�.\n", dishA, dishC);
	movePancake(pancake - 1, dishB, dishA, dishC);
	cnt++;
}