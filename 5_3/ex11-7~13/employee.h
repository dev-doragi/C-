/**************************************************************
 * Employee Ŭ������ �������̽� ����                          *
 **************************************************************/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"

 // Employee Ŭ������ ����
class Employee : public Person
{
private:
    string name;
    double salary;
public:
    Employee(string name, double salary);
    ~Employee();
    void print() const;
};
#endif