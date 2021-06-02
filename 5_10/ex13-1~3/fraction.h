/**************************************************************
 * Fraction Ŭ������ �����ϴ� fraction.h �������̽� ����      *
 **************************************************************/
#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    // ������ ���
private:
    int numer;
    int denom;

    // public ��� �Լ�  
public:
    // ������
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction& fract);
    ~Fraction();
    // ������  
    int getNumer() const;
    int getDenom() const;
    void print() const;
    // ������
    void setNumer(int num);
    void setDenom(int den);

    // private ���� ��� �Լ�
private:
    void normalize();
    int gcd(int n, int m);
};
#endif