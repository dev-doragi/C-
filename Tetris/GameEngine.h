#ifndef __GAMEENGINE_H__
#define __GAMEENGINE_H__

#include "Header.h"

class GameEngine {
public:
	enum class GameState {
		PLAYING, GAMEOVER
	};
	GameState state = GameState::PLAYING;

	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = {
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0}
	};

	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	int userBlockVarious[3][USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{
			{0, 1, 0},
			{0, 1, 0},
			{0, 1, 0}
		},
		{
			{0, 0, 0},
			{0, 1, 1},
			{0, 1, 1}
		},
		{
			{0, 0, 1},
			{0, 0, 1},
			{0, 1, 1}
		},

	};

	// userBlock�� ��ġ�� ������ ����
	int blockX = 0;
	int blockY = 0;

	float elapsed = 0.0f;
	float controlCheck = 0.0f;

	void init();

	void next(float dt, char keyboardInput);

	bool canGoDown();

	bool canGoLeft();

	bool canGoRight();

	bool canRotate();

	bool isLineFilled(int y);

	void eraseLine(int y);

	// y ��ǥ�� �������� ���پ� �Ʒ��� ������ �Լ�
	void drop(int y);

	// userBlock�� gameGridData�� �����ϴ� �Լ�
	void trans();

	bool gameOverDecision();

	void makeUserBlock();

	// TODO ȸ�� �Լ� �����ϱ�
	void rotate();

	void makeDisplayData();
};
#endif //!__GAMEENGINE_H__
