/**************************************************************
 * Person, Student, Professor, TA Ŭ������                    *
 * Ȯ���ϴ� ���ø����̼�                                    *
 **************************************************************/
#include "ta.h"

int main()
{
	// Person Ŭ���� ���
	Person person("John");
	person.print();
	// Student Ŭ���� ���
	Student student("Anne", 3.9);
	student.print();
	// Professor Ŭ���� ���
	Professor professor("Lucie", 78000);
	professor.print();
	// TA Ŭ���� ���
	TA ta("George", 3.2, 20000);
	ta.print();
	return 0;
}