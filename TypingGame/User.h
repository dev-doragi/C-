#ifndef __USER_H__
#define __USER_H__

#include "Header.h"

class User {
public:
	// ���� ��
	string username;

	// ��� Ÿ�ڼӵ�
	float avgSpeed = 0.0f;

	// Ÿ�� ������ �󸶳� �Է��ߴ���
	int typingCount = 0;

	User(const string& username);
	void save();
	void load();

	void printUserInfo();
};

#endif // !__USER_H__
