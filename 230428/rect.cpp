#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int input;

	cout << "���ڸ� �Է��Ͻÿ� : ";
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			cout << " *";
		}
		cout << endl;
	}

	return 0;
}