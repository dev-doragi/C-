/**************************************************************
 * Ŭ�������� ����ϴ� ���ø����̼�                         *
 **************************************************************/
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"

int main()
{
	// Square Ŭ������ �ν��Ͻ�ȭ�ϰ� ���
	cout << "���簢���� ����" << endl;
	Square square(5);
	square.print();
	cout << "����: " << square.getArea() << endl;
	cout << "�ѷ�: " << square.getPerimeter() << endl;
	cout << endl;
	// Rectangle Ŭ������ �ν��Ͻ�ȭ�ϰ� ���
	cout << "���簢���� ����" << endl;
	Rectangle rectangle(5, 4);
	rectangle.print();
	cout << "����: " << rectangle.getArea() << endl;
	cout << "�ѷ�: " << rectangle.getPerimeter() << endl;
	cout << endl;
	// Triangle Ŭ������ �ν��Ͻ�ȭ�ϰ� ���
	cout << "�ﰢ���� ����" << endl;
	Triangle triangle(3, 4, 5);
	triangle.print();
	cout << "����: " << triangle.getArea() << endl;
	cout << "�ѷ�: " << triangle.getPerimeter() << endl;
	cout << endl;
	// Circle Ŭ������ �ν��Ͻ�ȭ�ϰ� ���
	cout << "���� ����" << endl;
	Circle circle(5);
	circle.print();
	cout << "����: " << circle.getArea() << endl;
	cout << "�ѷ�: " << circle.getPerimeter() << endl;
	cout << endl;
	// Ellipse Ŭ������ �ν��Ͻ�ȭ�ϰ� ���
	cout << "Ÿ���� ����" << endl;
	Ellipse ellipse(5, 4);
	ellipse.print();
	cout << "����: " << ellipse.getArea() << endl;;
	cout << "�ѷ�: " << ellipse.getPerimeter() << endl;
	return 0;
}