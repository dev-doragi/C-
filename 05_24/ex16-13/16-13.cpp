/*************************************************************
 * �ܾ� �ڿ� �ٹٲ� ���ڸ� �ִ� ���α׷�                     *
 *************************************************************/
#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    fstream fstr;
    fstr.open("file3.txt", ios::in | ios::out);

    char ch;
    while (fstr.get(ch))
    {
        if (isspace(ch))
        {
            fstr.seekp(-1, ios::cur); // ���ϳ��� ���ڿ��� ����κ����� ��Ŀ�� �̵�
            fstr.put('\n'); // �ٹٲ�
        }
    }
    fstr.close();
    return 0;
}