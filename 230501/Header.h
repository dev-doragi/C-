#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

float getInput() {
	float input;

	cout << "�Ǽ� �Է� : ";
	cin >> input;

	return input;
}

char getOperator() {
	char operate;

	cout << "������ �Է� : ";
	cin >> operate;

	return operate;
}

void getResult(float input1, float input2, char op) {
	switch (op) {
	case '+':
		cout << input1 + input2 << endl;
		break;
	case '-':
		cout << input1 - input2 << endl;
		break;
	case '*':
		cout << fixed << setprecision(3) << input1 * input2 << endl;
		break;
	case '/':
		cout << fixed << setprecision(3) << input1 / input2 << endl;
		break;
	case '%':
		cout << (int)input1 % (int)input2 << endl;
		break;
	default:
		cout << "�߸��� �����Դϴ�." << endl;
		break;
	}
}