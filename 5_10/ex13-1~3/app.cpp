/**************************************************************
 * SmartPtr Ŭ������ ����غ��� ���ø����̼�                  *
 **************************************************************/
#include "smartptr.h"
#include "fraction.h"

int main()
{
	// ����Ʈ ������ ����
	SmartPtr sp = new Fraction(2, 5);
	// * �����ڷ� ����� ����
	cout << "Fraction: " << endl;
	(*sp).print();

	// -> �����ڷ� ����� ����
	cout << "Fraction: " << endl;
	sp->print();
	cout << endl;
	return 0;
}