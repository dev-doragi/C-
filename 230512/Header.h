#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

int number_counter = 1;

class Employee {
public:
	int no;
	char name[20];
	int gender;
	char rank[20];

	Employee(char* name, int gender, char* rank) {
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->no = number_counter++;
	}

	void printInfo() {
		printf("\n��� ��ȣ : %d / ", no);
		printf("��� �̸� : %s\n", name);
		printf("��� ���� : %s / ", gender == 1 ? "����" : "����");
		printf("��� ���� : %s\n", rank);
	}
};

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	return input;
}