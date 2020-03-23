#include "Ball.h"
#include "Game.h"

Ball::Ball(int r, int number)
{

}

Color Ball::getColor()
{
	if (number < 10)
		return (Color)number;
	else
		return (Color)(number % 9);
}

Type Ball::getType()
{
	if (number < 10)
		return SOLID;
	else
		return STRIPED;
}

int Ball::getRadius()
{
	return r;
}

int Ball::getX()
{
	return x;
}

int Ball::getY()
{
	return y;
}

int Ball::getNumber()
{
	return 0;
}

int Ball::getSpeed()
{
	return 0;
}

int Ball::getAngle()
{
	return 0;
}

bool Ball::isTouchingEdge()
{
	return false;
}

bool Ball::isTouchingAnotherBall()
{
	return false;
}

void Ball::move()
{
}

void Ball::setInitialCoordinates()
{

}

void Ball::getGUICoordinateX(int width)
{

}

void Ball::getGUICoordinateY(int height)
{

}

bool Ball::isMoving()
{
	return false;
}

void Ball::recountPosition()
{
}

void Ball::recountVelocity()
{
}

void Ball::recountAngle()
{
}

bool Ball::isOnBoard()
{
	return false;
}

bool Ball::isWhite()
{
	return false;
}

bool Ball::isBlack()
{
	return false;
}

bool Ball::isSolid()
{
	return false;
}

bool Ball::isStriped()
{
	return false;
}
