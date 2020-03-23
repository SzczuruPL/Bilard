#pragma once
#include <vector>
#include "Ball.h"

class Player
{
private:
	std::vector <Ball> ball;
	Type type;
public:
	Player ();
	bool hit(int angle, int speed);
	bool isWinner();
	bool isSolid();
	bool isStriped();
};

