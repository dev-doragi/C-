//// ��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ���α׷� 
//#include <iostream>
//using namespace std;
//
//// Ŭ���� ����(class definition), ������ ����� ��� �Լ��� ���� 
//class Circle // Ŭ���� ���
//{
//private: // Ŭ���� ���ο����� ���� ����
//    double radius; // ������ ��� ����             
//public: // ��� �����κ��� ���� ����
//// ��� �Լ� ����, �Լ� ���ο��� ������ �Ͼ�� ���� �� �Լ� �ڿ� const�� ����
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//};
//// ��� �Լ� ���� �κ�, ��� �Լ����� Ŭ���� ���� �κп��� ����
//// getRadius ��� �Լ��� ����
//double Circle::getRadius() const // ���� �������� ��ȯ�ϴ� �Լ�
//{
//    return radius;
//}
//// getArea ��� �Լ��� ����
//double Circle::getArea() const // ���� ���̸� ��ȯ�ϴ� �Լ�
//{
//    const double PI = 3.14; // const ����� PI�� 3.14�� ����
//    return (PI * radius * radius);
//}
//// getPerimeter ��� �Լ��� ����
//double Circle::getPerimeter() const // ���� �ѷ��� ��ȯ�ϴ� �Լ�
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//// setRadius ��� �Լ��� ����
//void Circle::setRadius(double value)
//// ���ڷ� ���޵� value ���� ���� ���������� �����ϴ� �Լ�
//{
//    radius = value;
//}
//// ���ø����̼� �κ�, Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ�� 
//int main()
//{
//    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
//    cout << "Circle 1" << endl;
//    Circle circle1; // circle1 ��ü ����   
//    circle1.setRadius(10.0); // ȣ�� �� radius = 10.0
//    cout << "������: " << circle1.getRadius() << endl; // ������ ��ȯ
//    cout << "����: " << circle1.getArea() << endl; // ���� ��ȯ
//    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl; // �ѷ� ��ȯ
//
//    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  
//    cout << "Circle 2" << endl;
//    Circle circle2; // circle2 ��ü ����
//    circle2.setRadius(20.0);
//    cout << "������: " << circle2.getRadius() << endl;
//    cout << "����: " << circle2.getArea() << endl;
//    cout << "�ѷ�: " << circle2.getPerimeter();
//    return 0;
//}