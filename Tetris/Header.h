#define _CRT_SECURE_NO_WARNINGS	

#include "TetrisHelper.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

#define GRID_HEIGHT 10
#define GRID_WIDTH 7
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	void draw() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int j = 0; j < GRID_WIDTH; j++) {
				drawPosition(j, i, displayData[i][j] == 1);
			}
		}
	}
};

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

	void init() {
		// ���ʿ� ���� ������ �ʱ�ȭ �ϴ� �Լ�
		makeUserBlock();
	}

	void next(float dt, char keyboardInput) {
		// Update �Լ�
		if (state == GameState::GAMEOVER) return; // ���� ���� �������� üũ

		elapsed += dt;
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else {
				trans();
				if (gameOverDecision()) state = GameState::GAMEOVER;
			}
			elapsed -= 0.5f;
		}

		controlCheck += dt;

		if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.1f) {
			blockX--;
			controlCheck = 0.0f;
		}
		else if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.1f) {
			blockX++;
			controlCheck = 0.0f;
		}
		else if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1f) {
			blockY++;
			controlCheck = 0.0f;
		}
	}

	bool canGoDown() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				if (userBlock[i][j] == 1 && i + blockY + 1 >= GRID_HEIGHT)
					return false;
				if (userBlock[i][j] == 1 && gameGridData[i + blockY + 1][j + blockX] == 1)
					return false;
			}
		}
		return true;
	}

	bool canGoLeft() {
		for (int i = 0;i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				if (userBlock[i][j] == 1 && j + blockX - 1 < 0)
					return false;
				if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX - 1] == 1)
					return false;
			}
		}
		return true;
	}

	bool canGoRight() {
		for (int i = 0;i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				if (userBlock[i][j] == 1 && j + blockX + 1 > GRID_WIDTH - 1)
					return false;
				if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX + 1] == 1)
					return false;
			}
		}
		return true;
	}

	bool isLineFilled(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			if (gameGridData[y][i] == 0) return false;
		}
		return true;
	}

	void eraseLine(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			gameGridData[y][i] = 0;
		}
	}

	// y ��ǥ�� �������� ���پ� �Ʒ��� ������ �Լ�
	void drop(int y) {
		for (int i = y; i >= 0; i--) {
			for (int j = 0; j < GRID_WIDTH; j++) {
				// i - 1 �� �迭�� �ε������� ����� ���� �����ϱ� ���� ���׿����� �߰�
				gameGridData[i][j] = i - 1 < 0 ? 0 : gameGridData[i - 1][j];
			}
		}
	}

	// userBlock�� gameGridData�� �����ϴ� �Լ�
	void trans() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				int _x = j + blockX;
				int _y = i + blockY;
				gameGridData[_y][_x] = userBlock[i][j] | gameGridData[_y][_x];
			}
		}
		
		// �� ���� ���� �� �ִ��� Ȯ��
		for (int i = 0; i < GRID_HEIGHT; i++) {
			if (isLineFilled(i)) {
				eraseLine(i);
				drop(i);
			}
		}

		// ���ο� ��� ����
		makeUserBlock();
	}

	bool gameOverDecision() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX] == 1)
					return true; // ���� ����
			}
		}
		return false;
	}

	void makeUserBlock() {
		blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
		blockY = 0;

		int various = rand() % 3;
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				userBlock[i][j] = userBlockVarious[various][i][j];
			}
		}
		// �������� ���ο� ��� ����

	}

	// TODO ȸ�� �Լ� �����ϱ�
	void rotate() {

	}

	void makeDisplayData() {
		// ���� ���� �����͸� �ð������� ǥ�����ִ� �Լ�
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int j = 0; j < GRID_WIDTH; j++) {
				displayData[i][j] = gameGridData[i][j];
			}
		}

		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				int _x = j + blockX;
				int _y = i + blockY;
				if (_y < 0 || _y > GRID_HEIGHT) {
					// ǥ�� �������� ����� ��, �ƹ��͵� ���� ����
				}
				else if (_x < 0 || _x > GRID_WIDTH) {

				}
				else {
					displayData[_y][_x] = userBlock[i][j] | displayData[_y][_x];
				}
			}
		}
	}
};