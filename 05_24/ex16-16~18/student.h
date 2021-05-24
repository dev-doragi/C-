/**************************************************************
 * ���̳ʸ� ���Ͽ� ������ �뵵�� �����                       *
 * Student Ŭ������ �������̽� ����                           *
 **************************************************************/
#ifndef STUDEN_H
#define STUDEN_H
#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

class Student
{
private:
    int stdId; // �л� ID
    char stdName[20]; // �л� �̸�
    double stdGpa; // �л� ����
public:
    Student(int, const string&, double); // ������
    Student(); // �⺻ ������
    ~Student(); // �Ҹ���
    int getId() const; // �л� ID ���� �Լ�
    string getName() const; // �л� �̸� ���� �Լ�
    double getGpa() const;
};
#endif