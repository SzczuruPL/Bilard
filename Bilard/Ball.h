#pragma once
#include "Constants.h"
#include "Game.h"
class Ball
{
private:
	int r; // promien kuli
	int x;
	int y;
	//Color color;
	int number;
	//Type type;
	int speed;
	int angle; // kat uderzenia liczony od wspol x (patrz uklad wspl)
	bool onBoard;
public:
	Ball (int r, int number);
	Color getColor();
	Type getType();
	int getRadius();
	int getX();
	int getY();
	int getNumber();
	int getSpeed();
	int getAngle();
	bool isTouchingEdge();
	bool isTouchingAnotherBall();
	void move();
	void setInitialCoordinates();
	void getGUICoordinateX(int width);
	void getGUICoordinateY(int height);
	bool isMoving();
	void recountPosition();
	void recountVelocity();
	void recountAngle();
	bool isOnBoard();
	bool isWhite();
	bool isBlack();
	bool isSolid();
	bool isStriped(); // sam solid wystarczy, brak sensu tej zmiennej
};

