/**************************************************************
 * Person Ŭ������ Student Ŭ������ ����ϴ� ���ø����̼�     *
 **************************************************************/
#include "student.h"

int main()
{
	// Person ��ü �ν��Ͻ�ȭ�ϰ� ���
	Person person(111111111);
	cout << "Person ��ü�� ����: " << endl;
	person.print();
	cout << endl;
	// Student ��ü �ν��Ͻ�ȭ�ϰ� ���
	Student student(222222222, 3.9);
	cout << "Student ��ü�� ����: " << endl;
	student.print();
	cout << endl;
	return 0;
}