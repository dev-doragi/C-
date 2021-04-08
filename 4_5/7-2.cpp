//// ��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ��
//#include <iostream>
//using namespace std;
//
//// �Ű����� ������, �⺻ ������, ���� ������, �Ҹ���, ��� �Լ��� ���� 
//class Circle // Circle Ŭ���� ����
//{
//private:
//	double radius;
//public:
//	Circle(double radius);           // �Ű������� �ִ� ������
//	Circle();                        // �⺻ ������
//	~Circle();                       // �Ҹ���
//	Circle(const Circle& circle);    // ���� ������
//	void setRadius(double radius);   // ������
//	double getRadius() const;        // ������
//	double getArea() const;          // ������             
//	double getPerimeter() const;       // ������
//};
//
//// �Ű����� �������� ����
//Circle::Circle(double rds)
//	: radius(rds) // radius ���� �Ű����� ������ �ʱ�ȭ
//{
//	cout << "�Ű������� �ִ� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//// �⺻ �������� ����
//Circle::Circle()
//	: radius(0.0) // �Ű������� ���� ������ ���ǿ��� ������ ��(0.0)���� �ʱ�ȭ
//{
//	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//// ���� �������� ����
//Circle::Circle(const Circle& circle) // ��ü�� �Ű������� �ϴ� ������ ����
//	: radius(circle.radius) // ��ü�� radius ���� �����Ͽ� radius �ʱ�ȭ
//{
//	cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << endl;
//}
//// �Ҹ����� ����
//Circle::~Circle()
//{
//	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << radius;
//	// ��ü�� �������� �������� �� �ڵ����� ȣ��
//	cout << endl;
//}
//// setRadius ��� �Լ��� ����
//void Circle::setRadius(double value)
//{
//	radius = value;
//}
//// getRadius ��� �Լ��� ����
//double Circle::getRadius() const
//{
//	return radius;
//}
//// getArea ��� �Լ��� ����
//double Circle::getArea() const
//{
//	const double PI = 3.14;
//	return (PI * radius * radius);
//}
//// getPerimeter ��� �Լ��� ����
//double Circle::getPerimeter() const
//{
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//int main()
//{
//	// circle1 �ν��Ͻ�ȭ �Ŀ� ��� �Լ� ȣ��
//	Circle circle1(5.2); // 5.2�� �Ű������� �Ͽ� circle1 ����
//	cout << "������: " << circle1.getRadius() << endl;
//	cout << "����: " << circle1.getArea() << endl;
//	cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
//	// circle2 �ν��Ͻ�ȭ �Ŀ� ��� �Լ� ȣ��
//	Circle circle2(circle1); // circle1�� �Ű������� �Ͽ� circle2 ����
//	cout << "������: " << circle2.getRadius() << endl;
//	cout << "����: " << circle2.getArea() << endl;
//	cout << "�ѷ�: " << circle2.getPerimeter() << endl << endl;
//	// circle3 �ν��Ͻ�ȭ �Ŀ� ��� �Լ� ȣ��
//	Circle circle3; // �Ű������� ���� �⺻ �����ڷ� circle3 ����
//	cout << "������: " << circle3.getRadius() << endl;
//	cout << "����: " << circle3.getArea() << endl;
//	cout << "�ѷ�: " << circle3.getPerimeter() << endl << endl;
//	// �Ҹ��� ȣ�� ����
//	// C++���� ��ü�� ���ÿ� ����ǹǷ� ���� �������� ����� ��ü ������ �Ҹ��� ȣ��
//	return 0;
//}