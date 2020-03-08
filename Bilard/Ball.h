#pragma once
#include "Constants.h"
class Ball
{
private:
	int r;
	int x;
	int y;
	Color color;
	int number;
	Type type;
	int speed;
	int angle;
	bool onBoard;
public:
	bool isTouchingEdge();
	bool isTouchingAnotherBall();
	void move();
	bool isMoving();
	void recountPosition();
	void recountVelocity();
	void recountAngle();
	bool isOnBoard();
	bool isWhite();
	bool isBlack();
	bool isSolid();
	bool isStriped();
};

