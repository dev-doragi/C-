/**************************************************************
 * NPC Ŭ������ �������̽� ����                            *
 **************************************************************/
#ifndef NPC_H
#define NPC_H
#include "entity.h"

class NPC : public Entity // Entity Ŭ�����κ��� public ���
{
private:
    int atk;
    int dfs;
    int gold; // ������
public:
    NPC();
    NPC(string nam, int lev, bool isNPC, int gld);
    ~NPC();
    void print() const;
};
#endif