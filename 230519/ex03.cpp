//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
// // �Լ��� �����ε� -> ������ �Լ��� ���Ӱ� �����
//class Vector3 {
//public:
//	float x;
//	float y;
//	float z;
//
//	Vector3() { // �⺻ ������
//		x = 0.f;
//		y = 0.f;
//		z = 0.f;
//	}
//
//	Vector3(float x, float y, float z)
//		:x(x), y(y), z(z) {}
//
//	void printInfo() {
//		printf("%.2f, %.2f, %.2f\n", x, y, z);
//	}
//};
//
//Vector3 operator*(Vector3& v1, float x) {
//	// ������ �����ε�, +��� ������ �Լ��� ���Ӱ� ������
//	return Vector3(v1.x * x, v1.y * x, v1.z * x);
//}
//
//int main()
//{
//	Vector3 v1 = Vector3(10.f, 20.f, 30.f);
//	Vector3 result = v1 * 10;
//
//	result.printInfo();
//
//	return 0;
//}