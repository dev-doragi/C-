/**************************************************************
 * Student Ŭ������ �������̽� ����                           *
 **************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : virtual public Person  // ���� ���
{
protected:
    double gpa;  // protected ������ ���
public:
    Student(string name, double gpa);
    ~Student();
    void print();
};
#endif