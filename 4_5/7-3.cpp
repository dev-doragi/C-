//// �־��� ������ ������ ���ڸ� �����ϴ� Ŭ������ ����, �����ϰ� ����ϴ� ���α׷�  
//#include <iostream>
//#include <cstdlib> // C����� ǥ�� ���̺귯�� stdlib.h, C++������ cstdlib 
//#include <ctime> // C����� ǥ�� ���̺귯�� time.h, C++������ ctime
//using namespace std;
//
//// RandomInteger Ŭ������ ����
//class RandomInteger
//{
//private:
//    int low;       // �ּ� ����
//    int high;      // �ִ� ����
//    int value;     // ���� ���ڸ� ������ ����
//public:
//    RandomInteger(int low, int high);  // ������
//    ~RandomInteger();  // �Ҹ���
//    // �ռ� ���� �������� ���� ����
//    RandomInteger(const RandomInteger& random) = delete; // ���� ������ ���� 
//    void print() const;   // ������ ��� �Լ�
//};
//// RandomInteger Ŭ������ ������, �Ҹ���, ������ ��� �Լ� ����    
//// ������
//RandomInteger::RandomInteger(int lw, int hh)
//    :low(lw), high(hh)
//{
//    srand(time(0)); // ���� �õ� ����
//    int temp = rand(); // ���� �õ带 ���� ���� ���� ����
//    value = temp % (high - low + 1) + low; // �־��� ������ ���� ���ڷ� ����
//}
//// �Ҹ���
//RandomInteger::~RandomInteger()
//{
//}
//// ������ ��� �Լ� print()
//void RandomInteger::print() const
//{
//    cout << value << endl; // �־��� ���� ���� ���� ���ڸ� ���
//}
//
//// ���� ���� ��ü�� �ν��ͽ�ȭ �ϰ� ��(������ ����)�� ����ϴ� ���ø����̼�
//int main()
//{
//    // 100~200 ������ ���� ���� ����
//    RandomInteger r1(100, 200); // (100, 200)�� �Ű������� �Ͽ� ��ü r1 ����
//    cout << "100~200 ������ ������ ����: ";
//    r1.print(); // r1 ��ü�� print �Լ� ȣ��
//    // 400~600 ������ ���� ���� ����
//    RandomInteger r2(400, 600);
//    cout << "400~600 ������ ������ ����: ";
//    r2.print();
//    // 1500~2000 ������ ���� ���� ���� 
//    RandomInteger r3(1500, 2000);
//    cout << "1500~2000 ������ ������ ����: ";
//    r3.print();
//    return 0;
//}