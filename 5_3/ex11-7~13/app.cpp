/**************************************************************
 * Ŭ������ ����ϴ� ���ø����̼� ����                        *
 **************************************************************/
#include "student.h"
#include "employee.h"

int main()
{
	// Person Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
	cout << "Person: " << endl;
	Person person("John");
	person.print();
	cout << endl << endl;
	// Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
	cout << "Student: " << endl;
	Student student("Mary", 3.9);
	student.print();
	cout << endl << endl;
	// Employee Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
	cout << "Employee: " << endl;
	Employee employee("Juan", 78000.00);
	employee.print();
	cout << endl << endl;
	return 0;
}