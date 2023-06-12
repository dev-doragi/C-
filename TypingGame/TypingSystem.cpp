#include "TypingSystem.h"

void TypingSystem::loadData() {
	FILE* infile = fopen("sentences.txt", "r");

	for (;;) {
		if (feof(infile) == 1) break;
		char line[512] = { 0, };
		// �� �پ� �о��ִ� �ڵ�
		fscanf(infile, "%511[^\n]s", line);
		fgetc(infile);
		sentences.push_back(line);
	}

	fclose(infile);
}

void TypingSystem::printData() {
	for (int i = 0; i < sentences.size(); i++) {
		printf("%s\n", sentences[i].c_str());
	}
}

void TypingSystem::start() {
	this->loadData();
	for (;;) {
		clear();
		printMenu();
		char input = getChar();

		if (input == '1' && currentUser == nullptr) {
			// �α���
			// ����ڷκ��� �Է��� �޾� �ش� �Էµ� ���ڿ��� ����
			// ���ڿ��� ������ ���ϸ��� ������ �� ���Ͽ��� �����͸� �о�ͼ�
			// ���Ÿ��, �� Ÿ�ڿ��� ������ �ҷ����� ����
			putStringOnPosition(6, 4, "���̵� �Է�: ");
			string username = getString();
			currentUser = new User(username);
		}
		else if (input == '1' && currentUser != nullptr) {
			// �α׾ƿ�
			delete currentUser;
			currentUser = nullptr;
		}
		else if (input == '2' && currentUser != nullptr) {
			// Ÿ�ڿ��� ����
			typingStart();

		}
		else if (input == '3' && currentUser != nullptr) {
			// ���� ���� ���
			currentUser->printUserInfo();
		}
		else if (input == 'x' || input == 'X') {
			// ����
			putStringOnPosition(6, 13, "��� �����մϴ�.");
			break;
		}
	}
}

void TypingSystem::printMenu(){
	if (currentUser == nullptr) {
		putStringOnPosition(6, 3, "1. �α���");
	}
	else {
		putStringOnPosition(6, 3, "1. �α׾ƿ�");
		putStringOnPosition(6, 4, "2. Ÿ�ڿ��� ����");
		putStringOnPosition(6, 5, "3. ���� ��� ����");
	}
	putStringOnPosition(6, 12, "�޴��� �Է��ϼ���(����� X �Է�): ");
}

char TypingSystem::getChar()
{
	fseek(stdin, 0, SEEK_END);
	char c;
	scanf("%c", &c);
	return c;
}

string TypingSystem::getString()
{
	char input[100];
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	
	return input;
}

void TypingSystem::typingStart() {
	float  types_per_min = 0.0f;
	for (int i = 0; i < 5; i++) {
		clear();

		// sprintf�� ���� ������ �迭
		// ���������� ����.
		char buffer[128];

		// �д� Ÿ�� ���
		sprintf(buffer, "�д� Ÿ��: %.2f / ��� Ÿ��: %.2f", types_per_min, currentUser->avgSpeed);
		putStringOnPosition(6, 5, buffer);

		// �� ���α׷��� ������ �������� ���ʰ� �������� ���ϱ�
		float start = (float)clock() / CLOCKS_PER_SEC;

		int target = rand() % sentences.size();
		sprintf(buffer, "����: %s", sentences[target].c_str());
		putStringOnPosition(6, 6, buffer);

		// ���ڿ��� ����ڷκ��� �Է¹޴� ��
		putStringOnPosition(6, 7, "�Է�: ");
		string input = getString();

		float end = (float)clock() / CLOCKS_PER_SEC;
		float delta = end - start;

		// �Էµ� ���ڿ���, �ش� ���ڿ��� ��ġ��
		// �Է� �ӵ��� ����ؼ� ���

		// �д� Ÿ�� ���
		types_per_min = sentences[target].size() / delta * 60;
		// = float  types_per_min = strlen(sentences[target].c_str()) / delta * 60;

		// ��ġ��
		int matches = compare(sentences[target], input);
		float match_ratio = (float)matches / sentences[target].size();
		types_per_min = types_per_min * match_ratio;

		// Ÿ���� ī��Ʈ ����
		currentUser->typingCount++;

		// ��� Ÿ�� ���
		currentUser->avgSpeed = (currentUser->avgSpeed * ((float)currentUser->typingCount - 1.0) + types_per_min) / (float)currentUser->typingCount;
	}

	currentUser->save();
	putStringOnPosition(6, 8, "������ ����Ǿ����ϴ�.");
	putStringOnPosition(6, 9, "����Ϸ��� ���͸� �Է�..");
	fseek(stdin, 0, SEEK_END);
	fgetc(stdin);
}

int TypingSystem::compare(const string& original, const string& input) {
	int count = 0;

	// ������ �Է¹�, �� �߿� �� ū ���� size�� ���� �� ����
	int size = original.size() < input.size() ? original.size() : input.size();

	for (int i = 0; i < size; i++) {
		if (original.at(i) == input.at(i)) {
			count++;
		}
	}
	
	return count;
}
