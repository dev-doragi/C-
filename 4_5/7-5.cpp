// ��ü�� �����, ������� ��ü�� ���� ���� ���α׷�
#include <iostream>
using namespace std;
// Rectangle Ŭ������ ����  
class Rectangle
{
private:
    double length;
    double height;
    static int count;    // ���� ������ ���
public:
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle& rect);
    static int getCount();   // ���� ��� �Լ�
};
// ���� ������ ��� �ʱ�ȭ
int Rectangle::count = 0;
// �ν��Ͻ� ��� �Լ� ����
// �Ű������� �ִ� ������ ����
Rectangle::Rectangle(double len, double hgt)
    : length(len), height(hgt)
{
    count++;
}
// �⺻ ������ ����  
Rectangle::Rectangle()
    : length(0.0), height(0.0)
{
    count++;
}
// ���� ������ ����
Rectangle::Rectangle(const Rectangle& rect)
    : length(rect.length), height(rect.height)
{
    count++;
}
// �Ҹ��� ����    
Rectangle::~Rectangle()
{
    count--;
}
// ���� ��� �Լ� ����
int Rectangle::getCount()
{
    return count;
}

// Rectangle ��ü�� ����� ���� ���� ���ø����̼�
int main()
{
    {
        Rectangle rect1(3.2, 1.2);
        Rectangle rect2(1.5, 2.1);
        Rectangle rect3;
        Rectangle rect4(rect1);
        Rectangle rect5(rect2);
        cout << "��ü�� ��: " << rect5.getCount() << endl;
    }
    cout << "��ü�� ��: " << Rectangle::getCount();
    return 0;
}