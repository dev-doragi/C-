/**************************************************************
 * �� ���� �����ϴ� ���ø� �Լ��� ����ϴ� ���α׷�           *
 **************************************************************/
#include <iostream>
using namespace std;

// ���ø� �Լ� ����
template <typename T>
void exchange(T& first, T& second)
{
	T temp = first;
	first = second;
	second = temp;
}

int main()
{
	// int �ڷ��� ����
	int integer1 = 5;
	int integer2 = 70;
	exchange(integer1, integer2);
	cout << "swap(5, 70) = ";
	cout << integer1 << "  " << integer2 << endl;
	// double �ڷ��� ����
	double double1 = 101.5;
	double double2 = 402.7;
	exchange(double1, double2);
	cout << "swap(101.5, 402.7) = ";
	cout << double1 << "  " << double2 << endl;
	return 0;
}