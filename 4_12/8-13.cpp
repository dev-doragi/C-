// �л��� ���� ������� �� ����� 2���� �迭�� ���� Ȱ���ϴ� ���α׷�
#include <iostream>
#include <iomanip>
using namespace std;

// ù ��° �Ű������� �л��� ������ 2���� �迭�� �Ű������� �Է¹ް� �� ��° �Ű������� ������ ���� ����� ���ؼ� ���� ����
void findStudentAverage(int const scores[][3],
    double stdAver[], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / colSize;
        stdAver[i] = average;
    }
    return;
}
// ù ��° �Ű������� �л��� ������ 2���� �迭�� �Ű������� �Է¹ް� �� ��° �Ű������� �л��� ���� ����� ���ؼ� ���� ���� 
void findTestAverage(int const scores[][3],
    double tstAver[], int rowSize, int colSize)
{
    for (int j = 0; j < colSize; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / rowSize;
        tstAver[j] = average;
    }
}

int main()
{
    // �迭�� ���� ����
    const int rowSize = 5;
    const int colSize = 3;
    int scores[rowSize][colSize] = { {82, 65, 72},
                                     {73, 70, 80},
                                     {91, 67, 40},
                                     {72, 72, 68},
                                     {65, 90, 80} };
    double stdAver[rowSize];
    double tstAver[colSize];
    // �迭�� �����ϴ� �Լ� 2�� ȣ��
    findStudentAverage(scores, stdAver, rowSize, colSize);
    findTestAverage(scores, tstAver, rowSize, colSize);
    // ��� ���
    cout << "        ���� ����                       ���" << endl;
    cout << "        -----------------------------   -------  " << endl;
    // ���� ������ �л��� ��� ���
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << setw(12) << scores[i][j];
        }
        cout << fixed << setprecision(2) << "    " << stdAver[i] << endl;
    }
    // ��� ���
    cout << "         ---------------------------" << endl;
    cout << "���� ����  ";
    for (int j = 0; j < colSize; j++)
    {
        cout << fixed << setprecision(2) << stdAver[j] << "   ";
    }
    cout << endl;
    return 0;
}