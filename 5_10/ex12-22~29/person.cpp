/**************************************************************
 * Person Ŭ������ ���� ����                                  *
 **************************************************************/
#include "person.h"

 // ������
Person::Person(string nm)
	: name(nm)
{
}
// �Ҹ���
Person::~Person()
{
}
// print ��� �Լ�
void Person::print()
{
	cout << "Person" << endl;
	cout << "Name: " << name << endl << endl;
}