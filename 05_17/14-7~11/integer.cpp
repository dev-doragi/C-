/**************************************************************
 * Integer Ŭ������ ���� ����                                 *
 **************************************************************/
#include "integer.h"

 // function-try ����� ����� ������
Integer::Integer(int v)
try : sp(new int)
{
	*sp = v;
}
catch (...)
{
	throw;
}
// �Ҹ��� 
Integer::~Integer()
{
}
// ������ �Լ�
int Integer::getValue()
{
	return *sp;
}