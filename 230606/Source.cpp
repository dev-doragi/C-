#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str1 = "apple";
	string str2 = "banana"; 

	// string Ŭ������ compare �Լ�
	if (str1.compare(str2) == 0) {
		printf("�� ���ڿ��� ����\n");
	}
	else {
		printf("�� ���ڿ��� �ٸ���\n");
	}

	// strcmp�� �ϱ�
	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("�� ���ڿ��� ����\n");
	}
	else {
		printf("�� ���ڿ��� �ٸ���\n");
	}

	return 0;
}