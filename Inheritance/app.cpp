/**************************************************************
 * Ŭ������ ����ϴ� ���ø����̼� ����                        *
 **************************************************************/
#include "npc.h"
#include "mob.h"

int main()
{
	// NPC Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
	NPC npc_1("Mary", 32, true, 3000); // NPC ��ü ����
	npc_1.addItems("Apple");
	npc_1.addItems("Milk");
	npc_1.print();
	npc_1.getItems();
	cout << endl;

	NPC npc_2("Jack the Blacksmith", 24, true, 7000);
	npc_2.addItems("Long Sword");
	npc_2.addItems("Wood shield");
	npc_2.addItems("Old Boots");
	npc_2.print();
	npc_2.getItems();
	cout << endl;

	// MOB Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
	MOB mob_1("Slime", 6, false, 12); // MOB ��ü ����
	mob_1.setStatus(20, 15);
	mob_1.addItems("Slime ball");
	mob_1.addItems("Acid liquid");
	mob_1.print();
	mob_1.getItems();
	cout << endl;

	MOB mob_2("Goblin", 10, false, 20);
	mob_2.setStatus(25, 10);
	mob_2.addItems("200 Gold");
	mob_2.addItems("Club");
	mob_2.print();
	mob_2.getItems();
	cout << endl;

	return 0;
}