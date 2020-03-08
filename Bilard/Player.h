#pragma once
#include <vector>
#include "Ball.h"

class Player
{
private:
	std::vector <Ball> ball;
	Type type;
public:
	bool hit(int angle, int speed);
	bool isWinner();
	bool isSolid();
	bool isStriped();
};
