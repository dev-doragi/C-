//#include <iostream>
//#include <fstream> // ���� ����� �Լ��� ����ϱ� ���� ��� ����
//using namespace std;
//
//int main()
//{
//    // ���� ����
//    ifstream inputFile; // input file stream, �Է� ���� 
//    // �迭�� ���� ����
//    const int CAPACITY = 50;
//    int numbers[CAPACITY];
//    int size = 0;
//    // �ʱ�ȭ
//    int sum = 0;
//    double average;
//    int smallest = 1000000;
//    int largest = -1000000;
//    // ��ȿ�� �˻��ϸ鼭 ���� ����
//    inputFile.open("numFile.dat");
//    if (!inputFile)
//    {
//        cout << "�Է� ������ ���� ���� ������ �߻��߽��ϴ�." << endl;
//        cout << "���α׷��� �ߴ��մϴ�.";
//        return 0;
//    }
//    // ���Ͽ��� ���� �о� ���̱� 
//    while (inputFile >> numbers[size])
//    {
//        size++;
//    }
//    // �Է� ���� �ݱ�
//    inputFile.close();
//    // �հ�, ���, �ּҰ�, �ִ밪 ã��
//    for (int i = 0; i < size; i++)
//    {
//        sum += numbers[i];
//        if (numbers[i] < smallest)
//        {
//            smallest = numbers[i];
//        }
//        if (numbers[i] > largest)
//        {
//            largest = numbers[i];
//        }
//    }
//    average = static_cast<double>(sum) / size;
//    // ��� ���
//    cout << "��Ͽ� ���ڰ� " << size;
//    cout << "�� �ֽ��ϴ�." << endl;
//    cout << "�հ�: " << sum << endl;
//    cout << "���: " << average << endl;
//    cout << "�ּҰ�: " << smallest << endl;
//    cout << "�ִ밪: " << largest << endl;
//    return 0;
//}