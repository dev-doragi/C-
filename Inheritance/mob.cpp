/**************************************************************
 * MOB Ŭ������ ���� ����                                  *
 **************************************************************/
#include "mob.h"

// MOB Ŭ������ ������
MOB::MOB(string nam, int lev, bool isNPC, int exp)
:Entity(nam, lev, isNPC), exp(exp), atk(0), dfs(0)
{
	if (isNPC == true) // ���� ��ü�� NPC ���,
	{
		// �ɷ�ġ ����
		atk = 15;
		dfs = 15;
	}
}
// MOB Ŭ������ �Ҹ���
MOB::~MOB()
{
}
// print ��� �Լ��� ����
void MOB::print() const
{
	Entity::print();
	cout << "����ġ: " << exp << endl;
}