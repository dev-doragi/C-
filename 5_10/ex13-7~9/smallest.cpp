/**************************************************************
 * Smallest Ŭ������ ���� ����                                *
 **************************************************************/
#include "smallest.h"

 // ������
Smallest::Smallest()
{
    current = numeric_limits<int>::max();
}
// �Լ� ȣ�� ������ �����ε�                                                                                                                                    
int Smallest::operator()(int next)
{
    if (next < current)
    {
        current = next;
    }
    return current;
}