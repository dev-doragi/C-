// ī���� ���� while �ݺ����� ����ؼ� �л� ������ ����� ���ϴ� ���α׷� 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ����
    int score;
    int sum = 0;
    double average;
    // �ݺ���
    int counter = 0;  // ī���� �ʱ�ȭ
    while (counter < 4)   // ī���� ���� Ȯ��
    {
        // ó��(���� �о� ���̰� ���� sum�� ���ϱ�)
        cout << "������ �ϳ� �Է��ϼ���(0~100�� ����): ";
        cin >> score;
        sum = sum + score;
        counter++;   // ī���� ����
    }
    // ��� ���
    average = static_cast <double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "��� ���� = " << average;
    return 0;
}