#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
#define SIZE 4

using namespace std;

void Liner() {
	cout << "------------------------------------------------------------------------------------" << endl;
}

int Select() {
	int NUM;
loop:
	cout << "\n1:�ſ� ���� 2:���� 3:���� 4:�ſ� ����\n\n��ȣ�� �Է��ϼ���: ";
	cin >> NUM;
	switch (NUM) {
	case 1:
		return -3;
	case 2:
		return -1;
	case 3:
		return 1;
	case 4:
		return 3;
	default:
		cout << "\n�߸��� �����Դϴ�." << endl;
		goto loop;
	}
}

int Sum(int* score) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}

	return sum;
}

void printResult(int i_e, int s_n, int t_f, int j_p) {
	char* MBTI = (char*)malloc(sizeof(char) * SIZE);
	if (i_e < 0) MBTI[0] = 'I';
	else MBTI[0] = 'E';
	if (s_n < 0) MBTI[1] = 'S';
	else MBTI[1] = 'N';
	if (t_f < 0) MBTI[2] = 'T';
	else MBTI[2] = 'F';
	if (j_p < 0) MBTI[3] = 'J';
	else MBTI[3] = 'P';

	cout << "\n------------------------------------------------------------------------------------\n����� MBTI�� ";
	for (int i = 0; i < SIZE; i++) {
		cout << MBTI[i];
	}
	cout << "�Դϴ�." << endl;

	if (strncmp(MBTI, "ISTJ", SIZE) == 0) {
		cout << "����� �������� �Դϴ�. ��ǿ� ���Ͽ� ��Ȯ�ϰ� ü�������� ����ϸ� �����ϰ� å�Ӱ��� �ֽ��ϴ�.\n�ι�: ǻ������" << endl;
	}
	if (strncmp(MBTI, "ISFJ", SIZE) == 0) {
		cout << "����� �����ϰ� �����ϸ� ģ���մϴ�. ���� ������������ ����Դϴ�.\n�ι� : �¿�(����)" << endl;
	}
	if (strncmp(MBTI, "INFJ", SIZE) == 0) {
		cout << "����� �γ����� ���� ������� �����մϴ�. ��ġ�� ������ ������ �ֽ��ϴ�.\n�ι� : J.K. �Ѹ�(�ظ����� �۰�)" << endl;
	}
	if (strncmp(MBTI, "INTJ", SIZE) == 0) {
		cout << "����� �����̰� ȿ������ �߽��ϴ� ��ö�� ����Դϴ�.\n�ι� : ������(��Ʃ��)" << endl;
	}
	if (strncmp(MBTI, "ISTP", SIZE) == 0) {
		cout << "�����ϰ� �����ϰ� �����ְ� �ִ� ������ ��Ÿ�� �Դϴ�.\n�ι� : �ڸ��(������)" << endl;
	}
	if (strncmp(MBTI, "ISFP", SIZE) == 0) {
		cout << "�����ϰ� ���ϰ� ���濡 ���� ������� �����ϴ�. ���� ����鿡�� ���� �۾����� �����Դϴ�.\n�ι� : ����(����, BTS)" << endl;
	}
	if (strncmp(MBTI, "INFP", SIZE) == 0) {
		cout << "����� �������̰� �Ϻ��� �߱��ϸ� �����ǾƸ� �߱��ϴ� �����Դϴ�.\n�ι� : ���ͽ��Ǿ�(�۰�)" << endl;
	}
	if (strncmp(MBTI, "INTP", SIZE) == 0) {
		cout << "����� �����ϰ� �����ϸ� ����� ���� ����� �Դϴ�. ��ȸ���� �����ϴٴ� ���� ���� ����ϴ�.\n�ι� : ���ν�Ÿ��(������)" << endl;
	}
	if (strncmp(MBTI, "ESTP", SIZE) == 0) {
		cout << "����� Ȱ���ϴ� ���� �����ϴ� ������� �Դϴ�.\n�ι�: �� F �ɳ׵�(�̱��� �� �����)" << endl;
	}
	if (strncmp(MBTI, "ESFP", SIZE) == 0) {
		cout << "����� �����ο� ��ȥ�� �����ִ� ������ ��Ÿ���Դϴ�.\n�ι� : ��(����)" << endl;
	}
	if (strncmp(MBTI, "ENFP", SIZE) == 0) {
		cout << "����� ��ġ�� ������ �������� �׻� ���ο� ���ɼ��� ã�ƺ��� Ž�谡�Դϴ�.\n�ι� : �뵵����(��Ʃ��, �����)" << endl;
	}
	if (strncmp(MBTI, "ENTP", SIZE) == 0) {
		cout << "����� ������ ���� ����� ������ ���� �����մϴ�.\n�ι� : ������(��Ʈ����)" << endl;
	}
	if (strncmp(MBTI, "ESTJ", SIZE) == 0) {
		cout << "������ ��ü���̰� ������̸� ������ �̲������ ������ �Դϴ�.\n�ι� : ��濵(��ġ��)" << endl;
	}
	if (strncmp(MBTI, "ESFJ", SIZE) == 0) {
		cout << "�������� ���� �ٸ� ������� ������ �ִ� ���� �����ϸ� ������ �����ϰ� ����ְ� �����մϴ�.\n�ι� : �賲��(����)" << endl;
	}
	if (strncmp(MBTI, "ENFJ", SIZE) == 0) {
		cout << "����� �����ϰ� �������̸� �米���� ǳ���ϰ� ��Ÿ���Դϴ�.\n�ι� : �ż���(������)" << endl;
	}
	if (strncmp(MBTI, "ENTJ", SIZE) == 0) {
		cout << "����� �������̸� �����ϰ� �����°� ��ַ��� �ֽ��ϴ�. Ȱ�����̰� ������� ��ȹ�� �����մϴ�.\n�ι� : ��� ����(�丮��, �����)" << endl;
	}
	cout << "------------------------------------------------------------------------------------" << endl;
	free(MBTI);
}