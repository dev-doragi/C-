/**************************************************************
 * �Լ����� �߻��� ���ܸ�                                     *
 * try-catch ������� ó���ϴ� ���α׷�                       *
 **************************************************************/
#include <iostream>
using namespace std;

int quotient(int first, int second); // �Լ� ����

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "������ �Է��ϼ���: ";
        cin >> num1;
        cout << "�� �ٸ� ������ �Է��ϼ���: ";
        cin >> num2;
        // try-catch ���
        try
        {
            cout << "��� = " << quotient(num1, num2) << endl;
        }
        catch (int ex)
        {
            cout << "0���� ���� �� �����ϴ�." << endl;
        }
    }
    return 0;
}
// �Լ� ����
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw 0;
    }
    return first / second;
}