#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int sum(int a, int b);

int main(void)
{
	int numA, numB;

	cout << "������ �ϳ��� �Է��Ͻÿ�." << endl;

	cin >> numA;
	cin >> numB;

	cout << "�� ������ ���� " << sum(numA, numB) << endl;

	return 0;
}

int sum(int a, int b) {
	return a + b;
}