#include "Header.h"

int main()
{
	int* myArray;

	int input;
	cout << "���� �Է� : ";
	cin >> input;

	myArray = (int*)malloc(sizeof(int) * input); 
	// �޸� �����Ҵ� ���ִ� �Լ� malloc()

	for (int i = 0; i < input; i++)
	{
		myArray[i] = (i + 1) * 2;
	}

	for (int i = 0; i < input; i++)
	{
		cout << fixed << setw(2) << myArray[i] << endl;
	}

	free(myArray);

	return 0;
}