//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//class Student {
//public:
//	int student_no;
//	char student_name[20];
//
//	Student() {
//		student_no = 0;
//		strcpy(student_name, "�ƹ���");
//	}
//
//	Student(int studentNo, const char* student_name) {
//		this->student_no = studentNo;
//		strcpy(this->student_name, student_name);
//	}
//
//
//	~Student() {
//		printf("�Ҹ��ڰ� ȣ��Ǿ���.\n");
//	}
//
//	void printfInfo()
//	{
//		printf("%s �л��� �й� : %d\n", student_name, student_no);
//	}
//};
//
//int main()
//{
//	// ��ü�� �����ϴ� �ΰ��� ���
//	Student s1 = Student(29, "�Ͼ�");
//	Student* s2 = new Student(10, "������"); 
//	// Heap ������ �������� �Ҵ��� -> �����ڰ� ���� ����, ���� ���ϸ� ��������.
//
//	s1.printfInfo();
//	s2->printfInfo();
//
//	return 0;
//}
