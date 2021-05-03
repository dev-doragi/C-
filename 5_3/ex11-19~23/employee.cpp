/**************************************************************
 * Employee Ŭ������ ���� ����                                *
 **************************************************************/
#include "employee.h"

 // ������
Employee::Employee(string fst, string i, string lst,
    double sal)
    : name(fst, i, lst), salary(sal)
{
    assert(salary > 0.0 and salary < 100000.0);
}
// �Ҹ���
Employee::~Employee()
{
}
// print ��� �Լ�
void Employee::print() const
{
    name.print();
    cout << "�޿�: " << salary << endl << endl;
}