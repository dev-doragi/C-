/**************************************************************
 * Rectangle Ŭ������ ���� ����                               *
 **************************************************************/
#include "rectangle.h"

 // ������
Rectangle::Rectangle(double lg, double wd)
    : length(lg), width(wd)
{
    if (!isValid())
    {
        cout << "��ȿ���� ���� ���簢���Դϴ�.";
        assert(false);
    }
}
// �Ҹ���
Rectangle::~Rectangle()
{
}
// print ��� �Լ��� ����
void Rectangle::print() const
{
    cout << "���簢���� ũ�� = " << length << " X " << width << endl;
}
// ���� ���ϱ�
double Rectangle::getArea() const
{
    return length * width;
}
// �ѷ� ���ϱ�
double Rectangle::getPerimeter() const
{
    return 2 * (length + width);
}
// isValid private ��� �Լ�
bool Rectangle::isValid() const
{
    return (length > 0.0 && width > 0.0);
}