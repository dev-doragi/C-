/*************************************************************
 * Student Ŭ������ ���� ����                                *
 *************************************************************/
#include "student.h"

 // �Ű������� �ִ� ������
Student::Student(int id, const string& name, double gpa)
    : stdId(id), stdGpa(gpa)
{
    strcpy_s(stdName, name.c_str());
    if (stdId < 1 || stdId > 99) // �л� ID�� 1~99 ���̿� �־�� ��
    {
        cout << "identity�� ���� ������ �Ѿ����ϴ�. ���α׷��� �ߴ��մϴ�.";
        assert(false);
    }
    if (stdGpa < 0.0 || stdGpa > 4.0) // �л� ������ 1.0~4.0 ���̿� �־�� ��
    {
        cout << "gpa�� ���� ������ �Ѿ����ϴ�. ���α׷��� �ߴ��մϴ�.";
        assert(false);
    }
}
// �⺻ ������
Student::Student()
{
}
// �Ҹ���
Student::~Student()
{
}
// ������ �Լ�
int Student::getId() const
{
    return stdId;
}
// ������ �Լ�
string Student::getName() const
{
    return stdName;
}
// ������ �Լ�
double Student::getGpa() const
{
    return stdGpa;
}