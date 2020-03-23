#pragma once
#include <vector>
#include "Ball.h"

class Player
{
private:
	Type type;
public:
	Player ();
	bool hit(int angle, int speed);
	bool isWinner();
	bool isSolid();
	bool isStriped();
};

