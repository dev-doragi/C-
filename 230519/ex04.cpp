//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//// �Լ��� �������̵� -> �Լ��� �����ٰ� ����
//class Animal {
//public:
//	int legs;
//	char name[20];
//	
//	Animal(int legs, const char* name) {
//		this->legs = legs;
//		strcpy(this->name, name);
//	}
//
//	void printInfo() { // printInfo() �Լ� ����
//		printf("�ٸ�: %d, �̸�: %s\n", legs, name);
//	}
//};
//
//class Human : public Animal {
//public:
//	char regist_no[30];
//
//	Human(const char* regist_no) : Animal(2, "���") {
//		strcpy(this->regist_no, regist_no);
//	}
//
//	void printInfo() { // ������  printInfo() �Լ��� �ڽ� Ŭ�������� �������̵�
//		printf("�̸�: %s, �ֹι�ȣ: %s\n", name, regist_no);
//	}
//};
//
//int main() {
//	Human* human = new Human("1234-5478");
//	Animal* animal = new Animal(4, "��");
//
//	human->printInfo();
//	animal->printInfo();
//
//	return 0;
//}
