/*************************************************************
 * Person Ŭ������ ���� ����                                 *
 *************************************************************/
#include "person.h"

 // Person �������� ����                    
Person::Person(string nm)
	: name(nm)
{
}
// Person ���� �Ҹ��� ����             
Person::~Person()
{
}
// print ���� �Լ��� ����
void Person::print() const
{
	cout << "Name: " << name << endl;
}