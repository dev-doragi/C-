#include "Header.h"

// �ܾ��� ���� �Է��� �� �ִ� ���� �ۼ�
// �ܼ� �Է����� �ܾ�� �� �Է� �Ͽ� ������ ���
// �˻��� ���� �ܾ��� ���� ã�� �� �־�� �Ѵ�.
// ã���� �ϴ� �ܾ ���� �� ���ٰ� ���.

int getInteger(const char* prompt) {
	printf("%s", prompt);
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

string getString(const char* prompt) {
	printf("%s", prompt);
	char str[100] = { 0, };
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", str);
	return str;
}

void Dictionary::insertWord(const string& word, const string& meaning) {
	words[word] = meaning;
}
bool Dictionary::exists(const string& word) {
	return words.count(word) == 1;
}
string Dictionary::getMean(const string& word) {
	return words[word];
}

int main()
{
	Dictionary* dict = new Dictionary;
	for (;;) {
		printf("1. �ܾ� ���\n");
		printf("2. �ܾ��� ����\n");
		printf("3. ���α׷� ����\n");
		int menu = getInteger("��ȣ�� �Է��ϼ���: ");

		if (menu == 1) {
			string word = getString("���ܾ �Է��ϼ���: ");
			string mean = getString("���� �Է��ϼ���: ");
			if (dict->exists(word)) {
				printf("�ߺ��� �ܾ��Դϴ�.\n");
			}
			else {
				dict->insertWord(word, mean);
				printf("�ܾ ��ϵ�\n");
			}
		}
		else if (menu == 2) {
			string word = getString("���ܾ �Է��ϼ���: ");
			if (dict->exists(word)) {
				printf("\n%s�� ��\n * %s\n\n", word.c_str(), dict->getMean(word).c_str());
			}
			else {
				printf("ã�� �ܾ �����ϴ�.\n");
			}
		}
		else if (menu == 3) {
			printf("��� �����մϴ�.\n");
			return 0;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}

	}
}