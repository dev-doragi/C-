//#include "Header.h"
//
//struct Marine {
//	int hp = 40;
//	int atk = 5;
//};
//
//int main()
//{
//	// 1. ����ü ������ ����
//	//Marine* marine = nullptr; // �ΰ����� �ʱ�ȭ
//	//marine = (Marine*)malloc(sizeof(Marine)); // �޸� �����Ҵ�
//
//	// 2. ����ü ������ �迭
//	//Marine* marine[40] = { nullptr, };
//	//for (int i = 0; i < 40; i++) {
//	//	marine[i] = (Marine*)malloc(sizeof(Marine));
//	//}
//
//	// 3. ���� ������ (����ü)
//	// Marine* marine[40] == Marine** marine (����� ���ϸ� �ٸ��ٰ� �Ѵ�.)
//	// �迭�� �� �������̱� ������ �̷��� ǥ�� ����
//	Marine** marine = nullptr;
//	marine = (Marine**)malloc(sizeof(Marine*) * 20); // 4Byte * 20 ¥�� �޸� �Ҵ�
//	for (int i = 0; i < 40; i++) {
//		marine[i] = (Marine*)malloc(sizeof(Marine)); // ������ ����ü�� �޸� �Ҵ�
//
//	return 0;
//}