#include "Header.h"

int main()
{
	int input, cnt;
	int* pcnt = &cnt;
	printf("���� ������ ������ �Է�...  ");
	scanf("%d", pcnt);
	Weapon** weapon = new Weapon * [*pcnt];

	while(1){

		printf("�޴� �Է�(1.������� 2.�������� 3.��ü �ʱ�ȭ (0�Է� �� ����))  ");
		scanf("%d", &input);
		if (input == 1) {
			for (int i = 0; i < *pcnt; i++)
			{
				printf("���� ����(1.���ҵ� 2.�ռҵ� 3.�ظ�)  ");
				scanf("%d", &input);
				switch (input) {
				case 1:
					weapon[i] = new ShortSword();
					break;
				case 2:
					weapon[i] = new LongSword();
					break;
				case 3:
					weapon[i] = new Hammer();
					break;
				}
			}
		}
		else if (input == 2) {
			for (int i = 0; i < *pcnt; i++) {
				weapon[i]->printInfo();
			}
		}
		else if (input == 3) {
			for (int i = 0; i < *pcnt; i++) {
				delete weapon[i];
			}
		}
		else if (input == 0) {
			printf("��� �����մϴ�.\n");
			return 0;
		}
	}


	/*while (input) {
		printf("�޴� �Է�(1.������� 2.�������� 3.��ü �ʱ�ȭ (0�Է� �� ����))");
		scanf("%d", &input);

		if (input == 1) {
			loop:
			printf("���� ����(1.���ҵ� 2.�ռҵ� 3.�ظ�)");
			scanf("%d", &input);
			switch (input) {
			case 1: 
				weapon[index++] = new ShortSword();
				break;
			case 2:

				break;
			case 3:

				break;
			default:
				goto loop;
			}
		}
		else if (input == 2) {
			for (int i = 0; i < SIZE; i++) {
				weapon[i]->printInfo();
			}
			continue;
		}
		else if (input == 3) {
			for (int i = 0; i < SIZE; i++) {
				delete weapon[i];
			}
			continue;
		}
		else if (input == 0) {
			return 0;
		}
		else {
			printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
			continue;
		}
	}*/
}