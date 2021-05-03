/**************************************************************
 * Person Ŭ������ ���� ����                                  *
 **************************************************************/
#include "person.h"

 // �⺻ ������
Person::Person()
	: identity(0)
{
}
// �Ű������� �ִ� ������  
Person::Person(long id)
	: identity(id)
{
	assert(identity >= 100000000 && identity <= 999999999);
}
// ���� ������
Person::Person(const Person& person)
	: identity(person.identity)
{
}
// �Ҹ���      
Person::~Person()
{
}
// ������ ��� �Լ�
void Person::print() const
{
	cout << "Identity: " << identity << endl;
}