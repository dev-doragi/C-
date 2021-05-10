/*************************************************************
 * Student Ŭ������ ���� ����                                *
 *************************************************************/
#include "student.h"

 // ������
Student::Student(string name, double gp)
	: Person(name), gpa(gp)
{
	assert(gpa <= 4.0);
}
// �Ҹ���
Student::~Student()
{
}
// protected ������ ��� name�� ����ϴ� print ��� �Լ�
void Student::print()
{
	cout << "Student " << endl;
	cout << "Name: " << name << "  ";
	cout << "GPA: " << gpa << endl << endl;
}