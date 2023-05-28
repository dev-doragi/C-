#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// ������ ����, enum�� �ý��� ���������δ� int ������ ��������, �������� ����. 
//enum Day {
//	SUNDAY = 0, MONDAY, TUESDAY, WEDNESSDAY, THURSDAY, FRIDAY, SATURDAY
//};
//
//int main()
//{
//	Day d = Day::MONDAY;
//	return 0;
//}

enum class Gender {
	MALE, FEMALE
};

class Student {
public:
	char name[10];
	int student_no;
	Gender gender; // �������� Ŭ������ �ν��Ͻ��� Ȱ���� �� �ִ�.

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}
	 
	void printInfo() {
		printf("%s�� ������ ������ �����ϴ�.\n", name);
		printf("�й�: %d\n����: %s\n",
			student_no, gender == Gender::MALE ? "����" : "����"
		);
	}
};

int main()
{
	Student* student = new Student("ö��", 2020203, Gender::MALE);

	student->printInfo();

	return 0;
}