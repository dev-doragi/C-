/**************************************************************
 * Student Ŭ������ ���� ����                                 *
 **************************************************************/
#include "student.h"

 // Student Ŭ������ ������
Student::Student(string nm, double gp)
	:Person(nm), gpa(gp)
{
}
// Student Ŭ������ �Ҹ���
Student::~Student()
{
}
// print ��� �Լ��� ����
void Student::print() const
{
	Person::print();
	cout << "GPA: " << gpa << endl;
}