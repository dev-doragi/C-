// switch ���ǹ��� ����ؼ� pass/fail ���� ã��
#include <iostream>
using namespace std;

int main()
{
    // ���� ����
    char grade;
    // �Է¹ޱ�
    cout << "������ �Է��ϼ���(A, B, C, D, F): ";
    cin >> grade;
    // �ǻ� ����    
    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C': cout << "pass�Դϴ�.";
        break;
    case 'D':
    case 'F': cout << "fail�Դϴ�.";
        break;
    default:  cout << "�Է� �����Դϴ�. �ٽ� �õ��ϼ���.";
    } // switch ���� ����
    return 0;
}