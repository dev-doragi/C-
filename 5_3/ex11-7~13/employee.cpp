/**************************************************************
 * Employee Ŭ������ ���� ����                                *
 **************************************************************/
#include "employee.h"

 // Employee Ŭ������ ������
Employee::Employee(string nm, double sa)
	:Person(nm), salary(sa)
{
}
// Employee Ŭ������ �Ҹ���    
Employee::~Employee()
{
}
// print ��� �Լ��� ����
void Employee::print() const
{
	Person::print();
	cout << "�޿�: " << salary << endl;
}