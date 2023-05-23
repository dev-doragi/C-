#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>

//class FantasyUnit {
//public:
//	int maxHp;
//	int atk;
//	int range;
//	int movementSpeed;
//
//	char name[50];
//
//	FantasyUnit(int maxHp, int atk, int range, int movementSpeed) {
//		this->maxHp = maxHp;
//		this->atk = atk;
//		this->range = range;
//		this->movementSpeed = movementSpeed;
//	}
//
//	void printInfo() {
//		printf("%s�� �ɷ�ġ\n", name);
//		printf("�ִ� ü��: %d\n", maxHp);
//		printf("���ݷ�: %d\n", atk);
//		printf("���� ����: %d\n", range);
//		printf("�̵� �ӵ�: %d\n\n", movementSpeed);
//	}
//};
//
//class Goblin : public FantasyUnit {
//public:
//	Goblin() : FantasyUnit(80, 5, 10, 10){
//		strcpy(name, "���");
//	}
//};
//
//class Slime : public FantasyUnit {
//public:
//	Slime() : FantasyUnit(100, 3, 2, 5) {
//		strcpy(name, "������");
//	}
//};
//
//class Orc : public FantasyUnit {
//public:
//	Orc() : FantasyUnit(150, 7, 3, 7) {
//		strcpy(name, "��ũ");
//	}
//};
//
//class Skeleton : public FantasyUnit {
//public:
//	Skeleton() : FantasyUnit(35, 10, 15, 10) {
//		strcpy(name, "���̷���");
//	}
//};

class Weapon {
public:
	int atk;
	int range;
	int cost;
	char name[50];

	Weapon(int atk, int range, int cost, const char* name) {
		this->atk = atk;
		this->range = range;
		this->cost = cost;
		strcpy(this->name, name);
	};

	~Weapon();

	void setInfo(int atk, int range, int cost) {
		this->atk = atk;
		this->range = range;
		this->cost = cost;
	};

	void printInfo() {
		printf("%s�� ����\n", name);
		printf("���ݷ�: %d\n", atk);
		printf("��Ÿ�: %d\n", range);
		printf("����: % d\n", cost);
	};
};


Weapon::~Weapon() {
	printf("�Ҹ��ڰ� ȣ��Ǿ���\n");
}

class ShortSword : public Weapon {
public:
	ShortSword() : Weapon(10, 5, 500, "�� �ҵ�") {}
};

class LongSword: public Weapon {
public:
	LongSword() : Weapon(20, 10, 2000, "�� �ҵ�") {}
};

class Hammer : public Weapon {
public: 
	Hammer() : Weapon(30, 7, 3000, "�ظ�") {}
};
