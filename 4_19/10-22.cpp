//// ȸ���� �̿��Ͽ� ���ڿ� ���ϱ�
//#include <string>
//#include <iostream>
//using namespace std;
//
//// �Լ� ����
//void reverse(string& strg);
//bool isPalindrome(string& strg);
//
//int main()
//{
//    // �� ���ڿ� ����
//    string strg;
//    // �Է¹ޱ� 
//    cout << "���ڿ��� �Է��ϼ���: ";
//    getline(cin, strg);
//    // ȸ�� Ȯ��  
//    if (isPalindrome(strg))
//    {
//        cout << strg << "�� ȸ���Դϴ�.";
//    }
//    else
//    {
//        cout << strg << "�� ȸ���� �ƴմϴ�.";
//    }
//    return 0;
//}
//// isPalindrome �Լ��� ���ڿ��� �����ϰ� ������ �Ŀ� ���� ���ڿ��� ������ Ȯ��
//bool isPalindrome(string& strg)
//{
//    string temp(strg);
//    reverse(temp);
//    return (temp == strg);
//}
//// reverse �Լ��� �Ű������� ���޹��� ���ڿ��� ������
//void reverse(string& strg)
//{
//    string temp(strg);
//    int size = strg.size();
//    for (int i = 0; i < size; i++)
//    {
//        strg[i] = temp[size - 1 - i];
//    }
//}