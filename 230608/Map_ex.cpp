//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <map>
//#include <string>
//#include <algorithm>
//
//int getInteger(const char* prompt) {
//	printf("%s", prompt);
//	int input;
//	fseek(stdin, 0, SEEK_END);
//	scanf("%d", &input);
//
//	return input;
//}
//
//std::string getString(const char* prompt) {
//	printf("%s", prompt);
//	char str[100] = { 0, };
//	fseek(stdin, 0, SEEK_END);
//	scanf("%99[^\n]s", str);
//	return str;
//}
//
//int main()
//{
//	std::map<std::string, std::string> member;
//
//	for (;;) {
//		printf("1. ȸ������\n");
//		printf("2. ȸ�����\n");
//		printf("3. ���α׷� ����\n");
//		int menu = getInteger("��ȣ�� �Է��ϼ���: ");
//
//		if (menu == 1) {
//			std::string id = getString("���̵� �Է��ϼ���: ");
//			std::string pwd = getString("��й�ȣ�� �Է��ϼ���: ");
//			if (member.count(id)) {
//				printf("�ߺ��� ���̵��Դϴ�.\n");
//			}
//			else {
//				member[id] = pwd;
//				printf("ȸ�������� �Ϸ�Ǿ����ϴ�.\n");
//			}
//		}
//		else if (menu == 2) {
//			for (auto it = member.begin(); it != member.end(); it++) {
//				printf("%s\n", it->first.c_str());
//			}
//		} 
//		else if (menu == 3) {
//			return 0;
//		}
//		else {
//			printf("�߸��� �Է��Դϴ�.\n");
//		}
//
//	}
//
//	return 0;
//}