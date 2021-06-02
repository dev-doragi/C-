/*************************************************************
 * SmartPtr Ŭ������ ���� ����                               *
 *************************************************************/
#include "smartptr.h"

 // ������
SmartPtr::SmartPtr(Fraction* p)
	: ptr(p)
{
}
// �Ҹ���  
SmartPtr::~SmartPtr()
{
	delete ptr;
}
// ���� ������ �����ε�
Fraction& SmartPtr::operator*() const
{
	return *ptr;
}
// ��� ���� ������ �����ε�
Fraction* SmartPtr::operator->() const
{
	return ptr;
}