#include <iostream>
#include <iomanip>
using namespace std;

// ������ũ�� �����ϴ� �ϳ����� ž �ǽ�
int cnt = 0;
void movePancake(int pancake, char dishA, char dishB, char dishC);

int main()
{
	int pancake;

	cout << "������ũ�� ������ �Է��غ�����..";
	cin >> pancake;

	cout << "������ũ�� �ű�� ����" << endl;
	movePancake(pancake, 'A', 'B', 'C');
	cout << "������ũ�� �Ű��� Ƚ��: " << cnt << endl;

	return 0;
}

void movePancake(int pancake, char dishA, char dishB, char dishC) {
	if (pancake == 1) {
		cout << "������ũ�� " << dishA << "���ÿ��� " << dishC << "���÷� �̵��Ͽ����ϴ�." << endl;
		cnt++;
		return;
	}

	movePancake(pancake - 1, dishA, dishC, dishB);
	cout << "������ũ�� " << dishA << "���ÿ��� " << dishC << "���÷� �̵��Ͽ����ϴ�." << endl;
	movePancake(pancake - 1, dishB, dishA, dishC);
	cnt++;
}