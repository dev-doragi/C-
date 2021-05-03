/**************************************************************
 * Person Ŭ������ ���� ����                                  *
 **************************************************************/
#include "person.h"

 // ������
Person::Person(long id, Date bd)
	: identity(id), birthDate(bd)
{
	assert(identity > 111111111 && identity < 999999999);
}
// �Ҹ���
Person::~Person()
{
}
// print �Լ�
void Person::print() const
{
	cout << "�ֹε�Ϲ�ȣ: " << identity << endl;
	cout << "�������: ";
	birthDate.print();
	cout << endl << endl;
}