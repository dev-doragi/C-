/**************************************************************
 * Person Ŭ������ ���� ����                                  *
 **************************************************************/
#include "person.h"

 // Person Ŭ������ ������
Person::Person(string nm)
	:name(nm)
{
}
// Person Ŭ������ �Ҹ���
Person::~Person()
{
}
// print ��� �Լ��� ����
void Person::print() const
{
	cout << "�̸�: " << name << endl;
}