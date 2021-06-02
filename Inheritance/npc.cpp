/**************************************************************
 * NPC Ŭ������ ���� ����                                     *
 **************************************************************/
#include "npc.h"

 // NPC Ŭ������ ������
NPC::NPC(string nam, int lev, bool isNPC, int gld)
:Entity(nam, lev, isNPC), gold(gld), atk(0), dfs(0)
{
	if (isNPC == true) // ���� ��ü�� NPC ���,
	{
		// �ɷ�ġ ����
		atk = 15;
		dfs = 15;
	}
}
// NPC Ŭ������ �Ҹ���
NPC::~NPC()
{
}
// print ��� �Լ��� ����
void NPC::print() const
{
	Entity::print();
	cout << "������: " << gold << endl;
}