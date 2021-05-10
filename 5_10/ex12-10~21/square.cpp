/*************************************************************
 * Square Ŭ������ ���� ����                                 *
 *************************************************************/
#include "square.h"

 // ������
Square::Square(double s)
    :side(s)
{
    if (!isValid())
    {
        cout << "��ȿ���� ���� ���簢���Դϴ�.";
        assert(false);
    }
}
// �Ҹ���
Square::~Square()
{
}
// print ��� �Լ��� ����
void Square::print() const
{
    cout << "���簢���� ũ�� = " << side << endl;
}
// ���� ���ϱ�
double Square::getArea() const
{
    return (side * side);
}
// �ѷ� ���ϱ�
double Square::getPerimeter() const
{
    return (4 * side);
}
// isValid private ��� �Լ�
bool Square::isValid() const
{
    return (side > 0.0);
}