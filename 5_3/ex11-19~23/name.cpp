/**************************************************************
 * Name Ŭ������ ���� ����                                    *
 **************************************************************/
#include "name.h"

 // ������
Name::Name(string fst, string i, string lst)
	:first(fst), init(i), last(lst)
{
	assert(init.size() == 1);
	toupper(first[0]);
	toupper(init[0]);
	toupper(last[0]);
}
// �Ҹ���
Name::~Name()
{
}
// print ��� �Լ�
void Name::print() const
{
	cout << "���� �̸�: " << first << " " << init << ". ";
	cout << last << endl;
}