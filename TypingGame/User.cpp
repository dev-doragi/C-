#include "User.h"

User::User(const string& username) {
	this->username = username;

	FILE* fp = fopen(username.c_str(), "r");
	bool exists = fp != nullptr;
	if (exists) fclose(fp);

	if (exists) {
		putStringOnPosition(6, 5, "����ڰ� �����մϴ�. �ҷ�������..");
		load();
		putStringOnPosition(6, 6, "�ҷ����� �Ϸ�. ����Ϸ��� ���͸� �Է�..");
		fseek(stdin, 0, SEEK_END);
		fgetc(stdin); // ���� �Է��ϱ������� �ӹ���

	}
	else {
		putStringOnPosition(6, 5, "����ڰ� �������� �ʽ��ϴ�. ���� �������..");
		save();
		putStringOnPosition(6, 6, "���� ����� �Ϸ�. ����Ϸ��� ���͸� �Է�..");
		fseek(stdin, 0, SEEK_END);
		fgetc(stdin);
	}
}

void User::save() {
	FILE* outfile = fopen(username.c_str(), "w"); // ���� ����
	fprintf(outfile, "%f\n", avgSpeed);
	fprintf(outfile, "%d\n", typingCount);
	fclose(outfile);
}

void User::load() {
	FILE* infile = fopen(username.c_str(), "r"); // �б� ����
	fscanf(infile, "%f", &avgSpeed);
	fgetc(infile);
	fscanf(infile, "%d", &typingCount);
	fgetc(infile);
	fclose(infile);
}

void User::printUserInfo(){
	char avgSpeed[50];
	sprintf(avgSpeed, "���Ÿ��: %f", this->avgSpeed);

	char count[50];
	sprintf(count, "Ÿ���� Ƚ��: %d", this->typingCount);
	
	putStringOnPosition(6, 6, avgSpeed);
	putStringOnPosition(6, 7, count);
	putStringOnPosition(6, 8, "����Ϸ��� ����Ű �Է�..");
	fseek(stdin, 0, SEEK_END);
	fgetc(stdin);

}
