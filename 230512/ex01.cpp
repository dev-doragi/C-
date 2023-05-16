#include "Header.h"
using namespace std;

int getInt(const char* prompt);
char* getString(const char* prompt);

int main()
{
	int input;
	Employee* employee[100];
	int cnt = 0;

	while (1) {
		printf("\n����� �Է��ϼ���\n");
		printf("1. ��� ����\n");
		printf("2. ��� �߰�\n");
		printf("3. ��� ����\n");
		printf("4. ���α׷� ����\n\n");

		fseek(stdin, 0, SEEK_END);
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; i < cnt; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			char* name = getString("\n����� �Է�:");
			int gender = getInt("���� �Է�(1.����, 2.����):");
			char* rank = getString("������� �Է�:");

			Employee* e = new Employee(name, gender, rank);
			delete[] name; // �����Ҵ�� ������ ����
			delete[] rank;

			employee[cnt++] = e;
		}
		else if (input == 3) {
			int number = getInt("�����ȣ �Է�:");
			int deletedIndex = -1;
			for (int i = 0; i < cnt; i++) {
				if (number == employee[i]->no) {
					delete employee[i];
					deletedIndex = i;
					break;
				}
			}
			if (deletedIndex >= 0) {
				for (int i = deletedIndex; i < cnt; i++) {
					employee[i] = employee[i + 1];
				}
			}
			cnt--;
		}
		else if (input == 4) {
			printf("��� �����մϴ�.\n");
			return 0;
		}
		else {
			printf("�߸��� ����Դϴ�. �ٽ� �Է��ϼ���.\n");
		}
	}
	

	return 0;
}