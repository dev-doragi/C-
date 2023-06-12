#ifndef __TYPING_SYSTEM_H__
#define __TYPING_SYSTEM_H__

#include "Header.h"
#include "User.h"

class TypingSystem {
private:
	// ������� �����
	vector<string> sentences;

	// ���� �����
	User* currentUser = nullptr;

	// ��ũ�κ��� �����͸� �о�ͼ� ���� ����Ʈ�� �ʱ�ȭ�ϴ� �Լ�
	void loadData();
public:
	void printData();

	void start();

	void printMenu();

	char getChar();

	string getString();

	void typingStart();

	// �Է¹��� ��Ȯ�� ��� �Լ�
	int compare(const string& original, const string& input);
};

#endif // !__TYPING_SYSTEM_H__

