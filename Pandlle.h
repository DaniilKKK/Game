#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Pandlle
{
public:
	Pandlle();
	~Pandlle();

	Sprite get_paddle()
	{ 
		return Paddle1;
	}


	void Right() 
	{
		Paddle1.move(6, 0);
	}
	void Left()
	{
		Paddle1.move(-6, 0);
	}

	void break_L() //���� �������� �����
	{
		Paddle1.move(-6, 0);
	}

	void break_R() //���� �������� ������
	{
		Paddle1.move(6, 0);
	}
private:
	Texture Pandlle_Pict;

	Sprite Paddle1;
};

