/**************************************************************
 * Ellipse Ŭ������ ���� ����                                 *
 **************************************************************/
#include "ellipse.h"

 // ������
Ellipse::Ellipse(double r1, double r2)
    : radius1(r1), radius2(r2)
{
    if (!isValid())
    {
        cout << "��ȿ���� ���� Ÿ���Դϴ�.";
        assert(false);
    }
}
// �Ҹ���
Ellipse::~Ellipse()
{
}
// print ��� �Լ��� ����
void Ellipse::print() const
{
    cout << "Ÿ���� ������ = " << radius1 << " X " <<
        radius2 << endl;
}
// ���� ���ϱ�
double Ellipse::getArea() const
{
    return (3.14 * radius1 * radius2);
}
// �ѷ� ���ϱ�    
double Ellipse::getPerimeter() const
{
    double temp = (radius1 * radius1 + radius2 * radius2) / 2;
    return (2 * 3.14 * sqrt(temp));
}
// isValid private ��� �Լ�
bool Ellipse::isValid() const
{
    return (radius1 > 0 && radius2 > 0);
}