//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//
//class Student {
//public:
//	int student_no;
//	char* name;
//	int gender;
//
//	Student(int pStdNo, const char* n, int g) {
//		student_no = pStdNo;
//		name = new char[strlen(n) + 1]; // �� ���� ������ �������� + 1, n = \0
//		strcpy(name, n);
//		gender = g;
//	}
//
//	~Student() {
//		printf("%s�� �Ҹ��� ȣ���.\n", name);
//		delete[] name;
//	}
//
//	void printStudentInfo() {
//		printf("�л���ȣ : %d\n", student_no);
//		printf("�л��̸� : %s\n", name);
//		printf("�л����� : %s\n\n", gender == 0 ? "����" : "����");
//	}
//};
//
//int main()
//{
//	Student s = Student(1234, "������", 0);
//	Student* s2 = new Student(456, "�����", 0);
//
//	s.printStudentInfo();
//	s2->printStudentInfo();
//	delete s2;
//
//	return 0; 
//}