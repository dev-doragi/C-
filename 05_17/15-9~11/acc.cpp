/**************************************************************
 * Fun Ŭ������ ����غ��� ���ø����̼� ����                  *
 **************************************************************/
#include "fun.cpp"

int main()
{
	// ���� �ٸ� �ڷ������� Ŭ������ �ν��Ͻ� ����
	Fun<int> Fun1(23);
	Fun<double> Fun2(12.7);
	Fun<char> Fun3('A');
	Fun<string> Fun4("Hello");
	// �� Ŭ������ �� ���
	cout << "Fun1: " << Fun1.get() << endl;
	cout << "Fun2: " << Fun2.get() << endl;
	cout << "Fun3: " << Fun3.get() << endl;
	cout << "Fun4: " << Fun4.get() << endl;
	// �� ����
	Fun1.set(47);
	Fun3.set('B');
	// ȣ�� ���� �� ���
	cout << "set ȣ�� ���� Fun1: " << Fun1.get() << endl;
	cout << "set ȣ�� ���� Fun3: " << Fun3.get() << endl;
	return 0;
}