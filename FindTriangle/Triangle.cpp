//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <cmath>
//
//int main()
//{
//	int a, b, c, temp;
//	printf("�� ���� �Է�..\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && b + c > a && a + c > b) {
//		// ���� �� �� ã��
//		if (a > b) {
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		if (a > c) {
//			temp = a;
//			a = c;
//			c = temp;
//		}
//		if (b > c) {
//			temp = b;
//			b = c;
//			c = temp;
//		}
//
//		// �ﰢ�� �Ǻ�
//		if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
//			printf("���� �ﰢ���Դϴ�.\n");
//		}
//		else if (pow(c, 2) < pow(a, 2) + pow(b, 2)) {
//			printf("���� �ﰢ���Դϴ�.\n");
//		}
//		else if (pow(c, 2) > pow(a, 2) + pow(b, 2)) {
//			printf("�а� �ﰢ���Դϴ�.\n");
//		}
//	}
//	else
//		printf("�ﰢ���� ������ �� �����ϴ�.\n");
//
//
//	return 0;
//}