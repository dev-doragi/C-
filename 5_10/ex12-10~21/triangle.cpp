/**************************************************************
 * Triangle Ŭ������ ���� ����                                *
 **************************************************************/
#include "triangle.h"

 // ������
Triangle::Triangle(double s1, double s2, double s3)
    : side1(s1), side2(s2), side3(s3)
{
    if (!isValid())
    {
        cout << "��ȿ���� ���� �ﰢ���Դϴ�.";
        assert(false);
    }
}
// �Ҹ���
Triangle::~Triangle()
{
}
// print ��� �Լ��� ����
void Triangle::print() const
{
    cout << "�ﰢ���� ũ�� = " << side1 << " X " << side2 << " X ";
    cout << side3 << endl;
}
// ���� ���ϱ�  
double Triangle::getArea() const
{
    double s = (side1 + side2 + side3) / 2;
    return (sqrt(s * (s - side1) * (s - side2) * (s - side3)));
}
// �ѷ� ���ϱ�
double Triangle::getPerimeter() const
{
    return (side1 + side2 + side3);
}
// isValid private ��� �Լ�
bool Triangle::isValid() const
{
    bool fact1 = (side1 + side2) > side3;
    bool fact2 = (side1 + side3) > side2;
    bool fact3 = (side2 + side3) > side1;
    return (fact1 && fact2 && fact3);
}