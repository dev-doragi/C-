/**************************************************************
 * Professor Ŭ������ ���� ����                               *
 **************************************************************/
#include "professor.h"

 // ������
Professor::Professor(string nm, double sal)
	: Person(nm), salary(sal)
{
}
// �Ҹ���
Professor::~Professor()
{
}
// print ��� �Լ�
void Professor::print()
{
	cout << "Professor " << endl;
	cout << "Name: " << name << "  ";
	cout << "Salary: " << salary << endl << endl;
}