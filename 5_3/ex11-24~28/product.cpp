/**************************************************************
 * Product Ŭ������ ���� ����                                 *
 **************************************************************/
#include "product.h"

 // ������
Product::Product(string nm, double up)
	: name(nm), unitPrice(up)
{
}
// �Ҹ���
Product::~Product()
{
}
// getPrice ��� �Լ�
double Product::getPrice() const
{
	return unitPrice;
}