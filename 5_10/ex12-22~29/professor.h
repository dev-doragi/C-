/**************************************************************
 * Professor Ŭ������ �������̽� ����                         *
 **************************************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"

class Professor : virtual public Person  // ���� ���
{
protected:
    double salary;  // protected ������ ���
public:
    Professor(string name, double salary);
    ~Professor();
    void print();
};
#endif