// EOF�� �÷��׸� ����ؼ� �ݺ��� �����ϱ�
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // ����  
//    ifstream infile;
//    int num;
//    bool flag;
//    // ���� ����  
//    infile.open("numbers.dat");
//    // 150 �̻��� ���ڸ� ã�� ���� �ݺ���
//    flag = false;
//    while (infile >> num && !flag)
//    {
//        if (num >= 150)
//        {
//            cout << "ã�� ���� = " << num;
//            flag = true;
//        }
//    }
//    // �÷��� Ȯ��
//    if (!flag)
//    {
//        cout << "ã�� ���ڰ� ���Ͽ� �������� �ʽ��ϴ�.";
//    }
//    infile.close();
//    return 0;
//}