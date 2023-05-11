#include "Header.h"

void Liner();
int Select(); // ���� ���� �Լ�
int Sum(int* score); // ������ ���׺� ������ �ջ��ϴ� �Լ�
void printResult(int i_e, int s_n, int t_f, int j_p);

int main()
{
	int* score; // �� ���׺� ����
	int i_e, s_n, t_f, j_p; // ������ �ջ� ������ ������ ����
	score = (int*)malloc(sizeof(int) * 5);

	cout << "\n***MBTI �׽�Ʈ�� �ǽ��մϴ�. �� ������ ���� �󸶳� ����, �����ϴ��� �������ּ���.***\n" << endl;

	// 1. I/E
	Liner();
	cout << "1. ���� ó������ ������� �ڽ��� �Ұ��ϴ� ���� �η��� �ʴ�." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "2. ���� ��Ʈ������ Ǫ�� ����� ������� ������ ���̴�." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "3. ��ȭ�� �� �� �ַ� �ֵ��ϴ� ��Ÿ���̴�." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "4. ������ �����ϴ� �� ���� ���ڸ����� �������ϴ� ���� �� ��̴�." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "5. ������� ���� ���� ���� ����� ����." << endl;
	Liner();
	score[4] = Select();

	i_e = Sum(score);

	// 2. S/N
	Liner();
	cout << "6. ������ �ϰų� ������ �� �� ��ȹ�� ���� �����." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "7. ���� �����̴� ���̵� ������ �޸� �ϰ� �Ѵ�." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "8. ���� ���������� ������ �ϴ� ���̴�." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "9. ���� �������� �����̴�." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "10. �뷡�� ���糪 ���� ���� �����ϸ鼭 ��ſ��� ������." << endl;
	Liner();
	score[4] = Select();

	s_n = Sum(score);

	// 3. T/F
	Liner();
	cout << "11. ������ ����� ����� �� ������ ã�⺸�� ������ ���ִ� ���̴�." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "12. � ���������� ������ ����� ���� �����ؾ��Ѵ�." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "13. �ٸ� ������� ���� ��� �����ϴ��� ����ġ�� �����Ѵ�." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "14. �������̳� ������ǰ���� ��ȭ�� ��󸶰� �� ���� ������ �ش�." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "15. �Ҽ� �� �ȼ��� �ι��鿡�� ���������� �� �Ѵ�." << endl;
	Liner();
	score[4] = Select();

	t_f = Sum(score);

	// 4. J/P
	Liner();
	cout << "16. ������ �ϴµ� �ֺ�ȯ�濡 �������� �ʴ� ���̴�." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "17. ������ ������ �ִ��� �̷���ٰ� �Ѳ����� �ϴ� ���̴�." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "18. ȣ����� ���� �����̴� �������̴�." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "19. ���������� ȸ������� �� ���� ���� ��� �ִٰ� �����Ѵ�." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "20. ���ο� �Ͽ� �����ϴ� ���� �η��� �ʴ�." << endl;
	Liner();
	score[4] = Select();

	j_p = Sum(score);

	printResult(i_e, s_n, t_f, j_p);
	free(score);

	return 0;
}

