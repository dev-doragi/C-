
/**************************************************************
 * MOB Ŭ������ �������̽� ����                               *
 **************************************************************/
#ifndef MOB_H
#define MOB_H
#include "entity.h"

class MOB : public Entity // Entity Ŭ�����κ��� public ���
{
private:
    int atk; 
    int dfs; 
    int exp; // óġ�� ����ġ
public:
    MOB();
    MOB(string nam, int lev, bool isNPC, int exp);
    ~MOB();
    void print() const;
};
#endif