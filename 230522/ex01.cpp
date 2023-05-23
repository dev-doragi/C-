#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// �Լ��� �������̵� -> �Լ��� �����ٰ� ����
// ���� �Լ� �ǽ�
class Animal {
public:
	int legs;
	char* name;
	
	Animal(int legs, const char* name) {
		this->name = new char[strlen(name) + 1];
		this->legs = legs;
		strcpy(this->name, name);
	}

	virtual ~Animal() {
		printf("Animal �Ҹ��ڰ� ȣ���.\n");
		delete[] name;
	}

	virtual void printInfo() { // virtual ������ ���̸� ��ü�� ���� �Լ��� ���缭 ������ �� ����.
		printf("�ٸ�: %d, �̸�: %s\n", legs, name);
	}
};

class Human : public Animal {
public:
	char* regist_no;

	Human(const char* regist_no) : Animal(2, "���") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	virtual ~Human() {
		printf("Human �Ҹ��ڰ� ȣ���.\n");
		delete[] regist_no;
	}

	 void printInfo() { 
		printf("�̸�: %s, �ֹι�ȣ: %s\n", name, regist_no);
	}
};

int main() {
	// 1. ���� �Լ� �ǽ� virtual
	//Human* human = new Human("1234-5478");
	//Animal* animal = human; // Animal Ŭ���� �ν��Ͻ� animal�� Human �ڽ� Ŭ������ �ν��Ͻ� human�� ����

	//human->printInfo();
	//animal->printInfo();

	// 2. �Ҹ��ڿ��� virtual Ű���带 �ٿ� ���������� �����ϱ�
	Animal* animal = new Human("1234-5678");
	animal->printInfo();
	delete animal;

	return 0;
}
