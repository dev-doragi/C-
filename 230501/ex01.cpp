#include "Header.h"

int getPow(float a, float b);

int main()
{
	srand(time(0));

	float input1;
	float input2;
	char op;
	char ops[5] = { '+', '-', '*', '/', '%' };

	input1 = getInput();
	input2 = getInput();
	cout << "p(����), x(���), r(��������) ";
	op = getOperator();

	switch (op)
	{
		case 'p':
			int result;
			result = getPow(input1, input2);
			cout << result << endl;
			break;
		case 'x':
			cout << "��� �����մϴ�." << endl;
			break;
		case 'r':
			char ranop;
			ranop = ops[rand() % 5];
			cout << "���� ������ : " << ranop << endl;
			getResult(input1, input2, ranop);
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
	}

	return 0;
}

int getPow(float a, float b) {
	int result;
	result = pow(int(a), int(b));
	return result;
}