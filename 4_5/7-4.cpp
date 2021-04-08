//// Rectangle Ŭ������ ����, ����, ����ϴ� ���α׷�
//#include <iostream>
//#include <cassert>
//using namespace std;
//// Rectangle Ŭ���� ���� 
//class Rectangle
//{
//private:
//    double length;      // ������ ���
//    double height;      // ������ ���
//public:
//    Rectangle(double length, double height);  // ������
//    Rectangle(const Rectangle& rect);  // ���� ������
//    ~Rectangle();  // �Ҹ���
//    void print() const; // ������ ���
//    double getArea() const; //  ������ ���
//    double getPerimeter() const; //  ������ ���
//};
//// ������, �Ҹ���, ������ �ν��Ͻ� ��� �Լ� ���� 
//// �Ű������� �ִ� ������
//Rectangle::Rectangle(double len, double hgt)
//    : length(len), height(hgt)
//{
//    assert((length > 0.0) && (height > 0.0));
//    /*if ((length <= 0.0) || (height <= 0.0))
//    {
//        cout << "Rectangle ��ü�� ������ �� �����ϴ�." << endl;
//        assert(false);
//    }*/
//}
//// ���� ������
//Rectangle::Rectangle(const Rectangle& rect)
//    : length(rect.length), height(rect.height)
//{
//}
//// �Ҹ���
//Rectangle::~Rectangle()
//{
//}
//// ������ ��� �Լ� Print
//void Rectangle::print() const
//{
//    cout << length << "x" << height << endl;
//}
//// ������ ��� �Լ� Get area
//double Rectangle::getArea() const
//{
//    return (length * height);
//}
//// ������ ��� �Լ� Get perimeter
//double Rectangle::getPerimeter() const
//{
//    return (2 * (length + height));
//}
//// 3���� ��ü�� �ν��Ͻ�ȭ�ϰ� Ȱ���ϴ� ���ø����̼�
//int main()
//{
//    // 3���� ��ü�� �ν��Ͻ�ȭ
//    Rectangle rect1(3.0, 4.2); // �Ű������� �ִ� ������ ���
//    Rectangle rect2(5.1, 10.2);  // �Ű������� �ִ� ������ ���
//    Rectangle rect3(rect2);      // ���� ������ ���
//    // ù ��° ��ü�� ��� �Լ��� ȣ��
//    cout << "�簢��1: ";
//    rect1.print();
//    cout << "����: " << rect1.getArea() << endl;
//    cout << "�ѷ�: " << rect1.getPerimeter() << endl << endl;
//    // �� ��° ��ü�� ��� �Լ��� ȣ��    
//    cout << "�簢��2: ";
//    rect2.print();
//    cout << "����: " << rect2.getArea() << endl;
//    cout << "�ѷ�: " << rect2.getPerimeter() << endl << endl;
//    // �� ��° ��ü�� ��� �Լ��� ȣ��
//    cout << "�簢��3: ";
//    rect3.print();
//    cout << "����: " << rect3.getArea() << endl;
//    cout << "�ѷ�: " << rect3.getPerimeter() << endl << endl;
//    return 0;
//}