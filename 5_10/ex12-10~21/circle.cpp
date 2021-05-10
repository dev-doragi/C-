/**************************************************************
 * Circle Ŭ������ ���� ����                                  *
 **************************************************************/
#include "circle.h"

 // ������
Circle::Circle(double r)
    : radius(r)
{
    if (!isValid())
    {
        cout << "��ȿ���� ���� ���Դϴ�.";
        assert(false);
    }
}
// �Ҹ���
Circle::~Circle()
{
}
// print ��� �Լ��� ����
void Circle::print() const
{
    cout << "���� ������ = " << radius << endl;
}
// ���� ���ϱ�
double Circle::getArea() const
{
    return (3.14 * radius * radius);
}
// �ѷ� ���ϱ�
double Circle::getPerimeter() const
{
    return 2 * 3.14 * radius;
}
// isValid private ��� �Լ�
bool Circle::isValid() const
{
    return (radius > 0);
}