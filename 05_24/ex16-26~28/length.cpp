/**************************************************************
 * length Ŭ������ ���� ����                                  *
 **************************************************************/
#include "length.h"

 // ������ ����
length::length(int n1)
	: n(n1)
{
}
// << ������ �����ε� 
ostream& operator<<(ostream& stream, const length& len)
{
	stream.width(len.n);
	return stream;
}