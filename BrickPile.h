#pragma once
#include "Brick.h"
#include <vector>
#include "Puck.h"

class BrickPile
{
public:
	BrickPile();
	~BrickPile();

	/*void WallBrick(Puck p);*/

	friend class GameTable;
	/*friend class Brick;
	/*void WallBrick();*/
	friend void GameRun();

	Sprite getBlocks() {
		return *block;
		
		
	}


	/*void WallBrick()
	{

		block.setPosition()

	}*/

private:
	int n = 0;//���������� ��� ������ ���� 0, �� ������


	Sprite block[1000];

	Brick *_Brick_Pile;
	int _amount = 50; //���� ������������� ���������� ��������
	int _bricks_x = 10;
	int _bricks_y = 5;
};